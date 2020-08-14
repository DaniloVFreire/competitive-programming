quant = int(input())
sequencia = list(map(int, input().split()))
escadinhas = 1

for i in range(2, quant):
  if sequencia[i] - sequencia[i-1] != sequencia[i-1] - sequencia[i-2]:
    escadinhas+=1
print(escadinhas)
