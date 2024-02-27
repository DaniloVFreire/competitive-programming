quant = int(input())
mult2 = 0
mult3 = 0
mult4 = 0
for x in range(quant):
  val = int(input())
  if val%2 == 0:
    mult2 += 1
  if val%3 == 0:
    mult3 += 1
  if val%4 == 0:
    mult4 += 1
print(mult2)
print(mult3)
print(mult4)


