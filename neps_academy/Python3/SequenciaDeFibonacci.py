quant = int(input())
v1 = 0
v2 = 1
aux = 0
for x in range(quant):
  if x == 0:
    print(v1, end=' ')
  else:
    print(v2, end=' ')
    aux = v1+v2
    v1 = v2
    v2 = aux
