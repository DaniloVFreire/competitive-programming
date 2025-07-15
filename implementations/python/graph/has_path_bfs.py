from collections import deque

def has_path(src, target, adj):
    q = deque([src])
    while len(q) > 0:
        crr = q.pop()
        if crr == target:
            return True
        for n in adj[crr]:
            q.appendleft(n)
    
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
    print(has_path("a", "e", adj))
    print(has_path("b", "a", adj))