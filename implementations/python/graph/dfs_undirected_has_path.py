import sys
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

def dfs_has_path(crr, tar, adj, vis):
    vis.add(crr)
    if crr == tar:
        return True
    for n in adj[crr]:
        if n not in vis:
            return dfs_has_path(n, tar, adj,vis)
    return False

if __name__ == "__main__":
    if len(sys.argv) > 1:
        file_path = sys.argv[1]
        adj = read_graph(file_path)
    print(adj)
    print(dfs_has_path("a", "b", adj, set()))
    print(dfs_has_path("a", "f", adj, set()))