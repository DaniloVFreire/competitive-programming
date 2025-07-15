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

def dfs(crr,adj, vis):
    vis.add(crr)
    for n in adj[crr]:
        if n not in vis:
            dfs(n, adj, vis)

def bfs(src, adj,vis):
    q = deque([src])
    while len(q)>0:
        crr = q.pop()
        vis.add(crr)
        for i in arj[crr]:
            if i not in vis:
                q.appendleft(i)

def connected_count(adj):
    vis = set()
    count = 0
    for n in adj.keys():
        if n not in vis:
            count +=1
            dfs(n, adj, vis)
    print(count)

if __name__ == "__main__":
    if len(sys.argv) > 1:
        file_path = sys.argv[1]
        adj = read_graph(file_path)
    connected_count(adj)