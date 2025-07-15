def dfs(curr, adj, visited):
    visited.add(curr)
    print(curr)
    for neighbor in adj[curr]:
        if neighbor not in visited:
            dfs(neighbor, adj, visited)

if __name__ == "__main__":
    adj = {
        "a": ["b", "c"],
        "b": ["d"],
        "c": ["e"],
        "d": ["f"],
        "e": [],
        "f": [],
    }
    dfs("a", adj, set())