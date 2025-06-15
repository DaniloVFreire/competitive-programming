# Start with a clean base image
FROM ubuntu:24.04

# Create a directory to store logs from the build process
RUN mkdir /log

# --- 1. Locales Configuration ---
# Set non-interactive frontend to avoid prompts during package installation.
# Update package lists, install locales, generate the en_US.UTF-8 locale,
# and redirect all output to a log file.
RUN { \
    echo "Setting up locales..."; \
    apt-get update -q && \
    DEBIAN_FRONTEND=noninteractive apt-get -y install locales && \
    sed -i '/en_US.UTF-8/s/^# //g' /etc/locale.gen && \
    locale-gen; \
    echo "Locale setup complete."; \
    } > /log/01-locales-setup.log 2>&1

# Set environment variables for the locale for all future sessions
ENV LANG en_US.UTF-8
ENV LANGUAGE en_US:en
ENV LC_ALL en_US.UTF-8

# --- 2. Install Core Packages ---
# Update package lists and install essential development tools and utilities.
# All output from this block is logged.
RUN { \
    echo "Installing core development packages..."; \
    apt-get update -q && \
    apt-get -y install gcc g++ python3 git tmux curl make python3-pip golang-go unzip ripgrep fd-find; \
    echo "Package installation complete."; \
    } > /log/02-install-packages.log 2>&1

# --- 3. Install Rust ---
# Download and install the latest stable version of Rust using rustup.
# The "-y" flag automates the installation. Output is logged.
RUN { \
    echo "Installing Rust..."; \
    curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y; \
    echo "Rust installation complete."; \
    } > /log/03-install-rust.log 2>&1

# Add Cargo's bin directory to the .bashrc file to make `cargo` and `rustc` available in the shell.
# This command modifies a file, so its output is not redirected.
RUN echo 'source $HOME/.cargo/env' >> ~/.bashrc

# --- 4. Install Neovim ---
# Download the pre-built linux64 binary for Neovim, extract it, and move it to /usr/local.
# This makes `nvim` available system-wide.
RUN { \
    echo "Downloading Neovim..."; \
    curl -L https://github.com/neovim/neovim/releases/latest/download/nvim-linux64.tar.gz -o nvim-linux64.tar.gz && \
    echo "Extracting Neovim..."; \
    tar xzvf nvim-linux64.tar.gz && \
    echo "Installing Neovim to /usr/local/"; \
    mv nvim-linux64 /usr/local/ && \
    echo "Cleaning up downloaded archive..."; \
    rm nvim-linux64.tar.gz; \
    } > /log/04-install-neovim.log 2>&1

# Add Neovim's bin directory to the .bashrc file to ensure it's in the PATH.
RUN echo 'export PATH="/usr/local/nvim-linux64/bin:$PATH"' >> ~/.bashrc

# --- 5. Configure Neovim with Kickstart ---
# Clone the kickstart.nvim repository, which provides a sensible default configuration for Neovim.
RUN { \
    echo "Removing any existing nvim config..."; \
    rm -rf ~/.config/nvim && \
    echo "Cloning kickstart.nvim..."; \
    git clone https://github.com/nvim-lua/kickstart.nvim.git ~/.config/nvim; \
    echo "Kickstart cloned successfully."; \
    } > /log/05-clone-kickstart.log 2>&1

# --- 6. Set Final Working Directory ---
# Set the working directory for the container. If the directory doesn't exist, it will be created.
WORKDIR /root/competitive-programming
