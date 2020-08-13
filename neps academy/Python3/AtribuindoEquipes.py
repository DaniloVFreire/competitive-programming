a = input().split()
for b in range(4):
  a[b] = int(a[b])
a.sort()
print(abs((a[0]+a[3]) - (a[1]+a[2])))