tam = input()
fila = list(map(int, input().split()))
quant = input()
sairam = list(map(int, input().split()))
hash1 = [1] * 100001

for i in sairam:
  hash1[i] = 0

for i in fila:
  if hash1[i]:
    print(i, end=' ')
