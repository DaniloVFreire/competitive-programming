quant = int(input())
val = [0] * 13
maximo = -1
for i in range(quant):
  val[int(input())]+=1

for i in range(13):
  if val[i] > maximo:
    maximo = val[i]

for i in range(13):
  if val[i] == maximo:
    print(i, end=" ")
