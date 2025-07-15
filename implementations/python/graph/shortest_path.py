import sys
from collections import deque

def shortest_path(src, adj,vis, tar):
    q = deque([(src,0)])
    while len(q) > 0:
        print(q)
        el = q.pop()
        print(el)
        crr = el[0]
        dist = el[1]
        vis.add(crr)
        if str(crr) == str(tar):
            return dist
        for i in adj[str(crr)]:
            if i not in vis:
                q.appendleft((i,dist+1))
    return float('inf')

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
    print(shortest_path('3',adj, set(),'4'))
    