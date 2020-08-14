quant = int(input())
montanha = list(map(int, input().split()))
b = 0
for i in range(1, quant-1):
  if montanha[i] < montanha[i+1] and montanha[i] < montanha[i-1]:
    b+=1
if b:
  print("S")
else:
  print("N")