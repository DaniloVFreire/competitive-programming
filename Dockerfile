From ubuntu:latest

RUN apt-get update -q && \
    apt-get -y install gcc g++ python3 git tmux curl make python3-pip golang-go unzip && \
    pip install tg && \
    curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y && \
    echo 'source $HOME/.cargo/env' >> ~/.bashrc && \
    curl -L https://github.com/neovim/neovim/releases/latest/download/nvim-linux64.tar.gz -o nvim-linux64.tar.gz && \
    tar xzvf nvim-linux64.tar.gz && \
    mv nvim-linux64 /usr/local/ && \
    echo 'export PATH="/usr/local/nvim-linux64/bin:$PATH"' >> ~/.bashrc && \
    rm -rf ~/.config/nvim && \
    git clone https://github.com/nvim-lua/kickstart.nvim.git ~/.config/nvim
    #nvim ~/.config/nvim/init.lua
    #apt install neovim && \
WORKDIR competitive-programming
