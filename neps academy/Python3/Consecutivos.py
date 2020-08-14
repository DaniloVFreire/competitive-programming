quant = int(input())
sequencias = list(map(int, input().split()))
sequencia1 = 0
sequencia2 = 0
aux = sequencias[0]

for x in sequencias:
  if aux == x:
    sequencia2 +=1
  if aux != x:
    aux = x
    if sequencia2 >= sequencia1:
      sequencia1 = sequencia2
    sequencia2 = 1

if sequencia2 >= sequencia1:
      sequencia1 = sequencia2

print(sequencia1)