FROM ubuntu:24.04

RUN apt-get update -q && DEBIAN_FRONTEND=noninteractive apt-get -y install locales

RUN sed -i '/en_US.UTF-8/s/^# //g' /etc/locale.gen && \
    locale-gen
ENV LANG en_US.UTF-8
ENV LANGUAGE en_US:en
ENV LC_ALL en_US.UTF-8

RUN apt-get update -q && \
    apt-get -y install gcc g++ python3 git tmux curl make python3-pip golang-go unzip ripgrep fd-find && \
    curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y && \
    echo 'source $HOME/.cargo/env' >> ~/.bashrc && \
    curl -L https://github.com/neovim/neovim/releases/latest/download/nvim-linux64.tar.gz -o nvim-linux64.tar.gz && \
    tar xzvf nvim-linux64.tar.gz && \
    mv nvim-linux64 /usr/local/ && \
    echo 'export PATH="/usr/local/nvim-linux64/bin:$PATH"' >> ~/.bashrc && \
    rm -rf ~/.config/nvim && \
    git clone https://github.com/nvim-lua/kickstart.nvim.git ~/.config/nvim
WORKDIR competitive-programming
