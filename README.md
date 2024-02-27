# competitive-programming
A simple repository with my competitive programming codes.  

## Requirements:
- Docker
- docker-compose

## How to install:
With docker and docker-compose previously installed run:  
```bash
cd competitive-programming
docker-compose up -d
```

## How to run:
To run the dockerized dev environment after the installation run inside the folder:
```bash
docker-compose up -d
docker exec -it competitive-programming bash
```
### To run C code:
1. Write your C code in a file, e.g., `program.c`.
2. Compile the code using GCC:
    ```bash
    gcc -o program program.c
    ```
3. Run the compiled program:
    ```bash
    ./program
    ```
### To run C++ code:
1. Write your C++ code in a file, e.g., `program.cpp`.
2. Compile the code using g++:
    ```bash
    g++ -o program program.cpp
    ```
3. Run the compiled program:
    ```bash
    ./program
    ```
### To run Rust code:
1. Write your Rust code in a file, e.g., `program.rs`.
2. Compile the code using Rust compiler:
    ```bash
    rustc -o program program.rs
    ```
3. Run the compiled program:
    ```bash
    ./program
    ```

### To run Go code:
1. Write your Go code in a file, e.g., `program.go`.
2. Compile the code using Go compiler:
    ```bash
    go build -o program program.go
    ```
3. Run the compiled program:
    ```bash
    ./program
    ```
### To run Python code:
1. Write your Python code in a file, e.g., `program.py`.
2. Run the Python script:
    ```bash
    python program.py
    ```

