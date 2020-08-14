espaco = int(input())
quant = int(input())
espacos = [0] * (espaco+1)
resp = 0

for i in range(quant):
  aux = int(input())
  espacos[aux] = 1

for i in range(espaco+1):
  resp += espacos[i]

print((espaco-resp))