# Use the official Alpine Linux base image
FROM alpine:latest

# Install necessary packages and dependencies
RUN apk update && \
    apk add --no-cache \
        gcc \
        g++ \
        python3 \
        python3-dev \
        git \
        tmux \
        curl \
        make \
        py3-pip \
        go \
        unzip \
        ripgrep \
        fd \
        tree-sitter \
        nodejs \
        neovim \
        neovim-doc \
        bash \
        ncurses

# Set Python 3 as the default Python interpreter
RUN ln -sf /usr/bin/python3 /usr/bin/python && \
    ln -sf /usr/bin/pip3 /usr/bin/pip

# Create and activate a virtual environment
RUN python -m venv /venv
ENV PATH="/venv/bin:$PATH"

# Upgrade pip within the virtual environment
RUN pip install --upgrade pip

# Install packages within the virtual environment
RUN pip install \
        rg \
        pynvim

# Install rust
RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y && \
    source $HOME/.cargo/env

# Install neovim plugins and configurations
RUN git clone https://github.com/nvim-lua/kickstart.nvim.git ~/.config/nvim

# Set the working directory
WORKDIR /competitive-programming
