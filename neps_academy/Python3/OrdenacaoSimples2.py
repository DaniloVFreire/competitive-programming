valores = []
for x in range(10):
  valores.append(int(input()))
valores.sort()
for x in valores:
  print(x, end=" ")
print()
for x in valores[::-1]:
  print(x, end=" ")