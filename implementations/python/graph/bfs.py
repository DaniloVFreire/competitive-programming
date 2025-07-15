from collections import deque

def bfs(source, adj):
    q = deque([source])
    while len(q) > 0:
        curr = q.pop()
        print(curr)
        for neighbor in adj[curr]:
                q.appendleft(neighbor)

if __name__ == "__main__":
    adj = {
        "a": ["b", "c"],
        "b": ["d"],
        "c": ["e"],
        "d": ["f"],
        "e": [],
        "f":[]
    }
    bfs("a", adj)