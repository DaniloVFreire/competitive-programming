quant = int(input())
postes = list(map(int, input().split()))
trocar = 0
consertar = 0
for x in postes:
  if x < 85 and x >= 50:
    consertar += 1
  elif x < 50:
    trocar +=1
print("{} {}".format(trocar, consertar))
