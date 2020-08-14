string = input()
filtro = ['a', 'e', 'i', 'o', 'u']
vogais = []
consoantes = []
for c in string:
  if c in filtro:
    vogais += c
  else:
    consoantes += c

print("Vogais: ",end='')
for c in vogais:
  print(c, end='')
print()
print("Consoantes: ", end='')
for c in consoantes:
  print(c, end='')
