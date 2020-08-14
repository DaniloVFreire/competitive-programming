entrada = list(map(int, input().split()))
val = int(input())
b = 0
posic = []
for i in range(10):
  if entrada[i] == val:
    posic.append(i)
    b+=1

if b:
  print(b)
  for i in posic:
    print(i, end=" ")
else:
  print("Mia x")
