matriz = [[int(input()), int(input()), int(input())],
 [int(input()), int(input()), int(input())], 
 [int(input()), int(input()), int(input())]]
maximo = -10000000
for i in matriz:
  for x in i:
    if x > maximo:
      maximo = x

for i in range(3):
  for x in range(3):
    if matriz[i][x] == maximo:
      matriz[i][x] = -1

for i in matriz:
  for x in i:
    print(x, end=' ')
  print()
      