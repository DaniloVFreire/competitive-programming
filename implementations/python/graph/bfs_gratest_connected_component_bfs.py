import sys
from collections import deque
def bfsc(src, adj,vis):
    q = deque([src])
    s = 0
    while len(q) > 0:
        crr = q.pop()
        if crr not in vis:
            s +=1
        vis.add(crr)
        for i in adj[crr]:
            if i not in vis:
                q.appendleft(i)
    return s

def gratest_component(adj):
    g = 0
    vis = set()
    for i in adj.keys():
        if i not in vis:
            g = max(bfsc(i,adj,vis), g)
    return g

def read_undirected_graph(file_name):
    adj = {}
    with open(file_name, 'r') as f:
        for l in f:
            n = l.split()
            for e in n:
                if e not in adj.keys():
                    adj[e] = []
            adj[n[0]].append(n[1])
            adj[n[1]].append(n[0])
    return adj

if __name__ == "__main__":
    if len(sys.argv) > 1:
        file_path = sys.argv[1]
        adj = read_undirected_graph(file_path)
    print(adj)
    print(gratest_component(adj))
    