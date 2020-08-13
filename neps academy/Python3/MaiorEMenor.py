quant = int(input())
maior = -1000
menor = 1000
for n in range(quant):
  aux = int(input())
  if (aux > maior):
    maior = aux
  if (aux < menor):
    menor = aux

print(maior)
print(menor)
