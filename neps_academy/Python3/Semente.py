fita_data = list(map(int, input().split()))
posic = list(map(int, input().split()))
fita = [0] * (fita_data[0]+1)
tempo = 0
completo = 0
desloc = 0
for i in posic:
  fita[i] = 1
  completo += 1

while (fita_data[0] - completo) > 0:
  desloc+=1
  for i in posic:
    if (i - desloc) > 0:
      if fita[i - desloc] == 0:
        fita[i - desloc] = 1
        completo += 1
    if (i + desloc) <= fita_data[0]:
      if fita[i+desloc] == 0:
        fita[i + desloc] = 1
        completo += 1
  tempo+=1

print(tempo)