pares = []
impares = []
for i in range(10):
  aux = int(input())
  if aux%2 == 0:
    pares.append(aux)
  else:
    impares.append(aux)

for i in pares:
  print(i, end=" ")
print()
for i in impares:
  print(i, end=" ")