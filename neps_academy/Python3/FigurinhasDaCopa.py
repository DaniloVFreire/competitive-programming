e1 = list(map(int, input().split()))
e2 = list(map(int, input().split()))
e3 = list(map(int, input().split()))

hash1 = [0] * (e1[0]+1)
b = 0

for i in e3:
  if i < (e1[0]+1):
    hash1[i] = 1
 
for i in e2:
  b += hash1[i]

print(e1[1] - b)