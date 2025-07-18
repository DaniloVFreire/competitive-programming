from typing import List
class Solution:
    def dfs(self, crr, adj, vis, l_vis):
        print(crr)
        print(l_vis)
        vis.add(crr)
        l_vis.add(crr)
        for n in adj[crr]:
            if n in l_vis:
                return False
            if n not in vis:
                res = self.dfs(n, adj,vis,l_vis)
                l_vis.remove(n)
                if res == False:
                    return False
        return True

    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        adj = {}
        vis = set()
        for i in range(numCourses):
            adj[i] =[]
        for r in prerequisites:
            adj[r[1]].append(r[0])
        for n in range(numCourses):
            if n not in vis:
                res = self.dfs(n,adj, vis,set())
                if res == False:
                    return False
        return True

solve = Solution()
print(solve.canFinish(4,[[1,0],[2,0],[3,1],[3,2]]))
print(solve.canFinish(2,[[1,0],[0,1]]))