def has_path(crr, target, adj, visited):
        if crr == target:
            return True
        visited.add(crr)
        for n in adj[crr]:
            if n not in visited:
                if has_path(n, target, adj, visited):
                    return True
        return False

if __name__ == "__main__":
    adj = {
        "a": ["b", "c"],
        "b": ["d"],
        "c": ["e"],
        "d": [],
        "e":[],
        "f": []
    }
    print(has_path("a", "e", adj, set()))
    print(has_path("b", "a", adj, set()))