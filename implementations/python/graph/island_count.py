matrix = [
    [0, 1, 0, 0, 1,],
    [1, 1, 0, 0, 1],
    [0, 1, 0, 0, 0],
    [0, 0, 0, 1, 1],
    [0, 1, 0, 1, 1],
    [0, 0, 0, 0, 0]
]

def dfs_island_mark(crr:tuple[int,int], matrix: list[list[int]],visited: list[list[int]]):
    s=0
    i,j = crr[0], crr[1]
    i_b, j_b = len(matrix)-1, len(matrix[i])-1
    if visited[i][j] != 1:
        s+=1
    visited[i][j] = 1
    #up
    if i > 0 and matrix[i-1][j] == 1 and visited[i-1][j] != 1:
        s += dfs_island_mark((i-1,j), matrix,visited)
    #down
    if i < i_b and matrix[i+1][j] == 1 and visited[i+1][j] != 1:
        s+= dfs_island_mark((i+1,j), matrix,visited)
    #left
    if j > 0 and matrix[i][ j-1] == 1 and visited[i][j-1] != 1:
        s += dfs_island_mark((i,j-1), matrix,visited)
    #right
    if j < j_b and matrix[i][j+1] == 1 and visited[i][j+1] != 1:
        s += dfs_island_mark((i,j+1), matrix,visited)
    return s
    

def dfs_island_count(matrix):
    count = 0
    max_island_size = float('-inf')
    min_island_size = float('inf')
    visited = [[0 for _ in range(len(matrix[0]))] for _ in range(len(matrix))]
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if visited[i][j] != 1 and matrix[i][j] == 1:
                count+=1
                island_size = dfs_island_mark((i,j), matrix,visited)
                min_island_size = min(min_island_size, island_size)
                max_island_size = max(max_island_size, island_size)
                print(f"island_size:{island_size}")
    
    print(f"max island size: {max_island_size}")
    print(f"Min island size: {min_island_size}")
    print(f"visited:{visited}")
    return count

print(dfs_island_count(matrix))
print(matrix)