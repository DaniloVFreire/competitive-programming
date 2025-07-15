import sys
from collections import deque
def read_graph(file_name):
    adj = {}
    try:
        with open(file_name, 'r') as f:
            for line in f:
                parsed = line.split()
                for n in parsed:
                    if n not in adj:
                        adj[n] = []
                adj[parsed[0]].append(parsed[1])
                adj[parsed[1]].append(parsed[0])
    except:
        pass
    return adj

def bfs_has_path(src, tar, adj, vis):
    q = deque([src])
    while len(q) > 0:
        crr = q.pop()
        if crr == tar:
            return True
        vis.add(crr)
        for n in adj[crr]:
            if n not in vis:
                q.appendleft(n)
    return False

if __name__ == "__main__":
    if len(sys.argv) > 1:
        file_path = sys.argv[1]
        adj = read_graph(file_path)
    print(adj)
    print(bfs_has_path("a", "b", adj, set()))
    print(bfs_has_path("a", "f", adj, set()))