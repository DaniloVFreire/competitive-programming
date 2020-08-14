quant = int(input())
alg = [0] * 10

for i in range(quant):
  a = input()
  for j in a:
    alg[int(j)] += 1

for i in range(10):
  print("{} - {}".format(i, alg[i]))
