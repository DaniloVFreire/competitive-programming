entrada = list(map(int, input().split()))
val = int(input())
b = 0
for i in entrada:
  if i == val:
    b = 1
if b:
  print("SIM")
else:
  print("NAO")