val = int(input())
resp = []
x = 0
while 1:
  resp.append(val%2)
  val = int((val-val%2)/2)
  if val == 0:
    break

for x in resp[::-1]:
  print(x, end='')

