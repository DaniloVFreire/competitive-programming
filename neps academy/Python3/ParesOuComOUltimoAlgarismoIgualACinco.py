numeros = [int(input()), int(input()), int(input())]
resultado = 0
for c in numeros:
  if c%2 == 0 or c%10 == 5:
    resultado+=1
print(resultado)
