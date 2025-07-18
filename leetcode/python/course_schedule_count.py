from typing import List
from collections import deque
class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        adj = {}
        vis = set()
        dep = [0 for _ in range(numCourses)] 
        done = 0
        for i in range(numCourses):
            adj[i] =[]
        for r in prerequisites:
            adj[r[1]].append(r[0])
            dep[r[0]] +=1
        q = deque()
        for i in range(numCourses):
            if dep[i] == 0:
                q.append(i)
                done += 1
        while len(q) > 0:
            crr = q.popleft()
            for n in adj[crr]:
                dep[n] -= 1
                if dep[n] <= 0:
                    done +=1
                    q.append(n)
        return done == numCourses 

solve = Solution()
print(solve.canFinish(4,[[1,0],[2,0],[3,1],[3,2]]))
print(solve.canFinish(2,[[1,0],[0,1]]))