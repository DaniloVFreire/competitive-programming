def dfs(curr, adj):
    print(curr)
    for v in adj[curr]:
        dfs(v, adj)

if __name__ == "__main__":
    adj = {
        "a": ["b", "c"],
        "b": ["d"],
        "c": ["e"],
        "d": ["f"],
        "e": [],
        "f": []
    }
    dfs("a", adj)
