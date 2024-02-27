e1 = list(map(int, input().split()))
e2 = list(map(int, input().split()))
posic = 0
resp = 0

if posic % e1[0] == (e1[2]-1):
  resp+=1

for i in e2:
  posic += i
  if posic % e1[0] == (e1[2]-1):
    resp+=1

print(resp)
  