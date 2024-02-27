quant = int(input())
fita = list(map(int, input().split()))
zeros = []

for i in range(quant):
  if fita[i] == 0:
    zeros.append(i)

for i in range(1,quant):
  for j in range(len(zeros)):
    if zeros[j]-1*i >= 0:
      if fita[zeros[j]-(1*i)] == -1:
        if i < 9:
          fita[zeros[j]-(1*i)] = i
        else:
          fita[zeros[j]-(1*i)] = 9

    if zeros[j]+1*i < quant:
      if fita[zeros[j]+(1*i)] == -1:
        if i < 9:
          fita[zeros[j]+(1*i)] = i
        else:
          fita[zeros[j]+(1*i)] = 9


for n in fita:
  print(n, end=" ")