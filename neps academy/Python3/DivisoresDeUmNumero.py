val = int(input())
divisores = []
soma = 0
for x in range(1, val+1):
  if val % x == 0:
    divisores.append(x)

print("{} divisor(es):".format(len(divisores)), end=' ')
for x in divisores:
  print(x, end=' ')
  soma +=x
print()
print('Soma de divisores = {}'.format(soma))
if len(divisores) == 2:
  print('Primo')
else:
  print('Nao primo')
