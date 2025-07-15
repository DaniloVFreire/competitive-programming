def dfs(source, adj):
    stack = [source]
    while len(stack) > 0:
        curr = stack.pop()
        print(curr)
        for neighbor in adj[curr]:
              stack.append(neighbor)

if __name__ == "__main__":
    adj = {
        'a':['b','c'],
        'b': ['d'],
        'c':['e'],
        'd': ['f'],
        'e':[],
        'f':[]
    }
    dfs('a',adj)
    