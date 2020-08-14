quant = int(input())
pecas = list(map(int, input().split()))
maos = [0] * 6
a = 0
b = 0
c = 0
for x in pecas:
  maos[x] += 1
  if maos[1] >= 1 and maos[3] >= 1 and maos[5] >= 1:
    a+=1
    maos[1] -= 1
    maos[3] -= 1
    maos[5] -= 1
  if maos[1] >= 1 and maos[4] >= 1:
    b+=1
    maos[1] -= 1
    maos[4] -= 1
  if maos[2] >= 1 and maos[4] >= 1:
    c+=1
    maos[2] -= 1
    maos[4] -= 1

print("A: {}".format(a))
print("B: {}".format(b))
print("C: {}".format(c))
