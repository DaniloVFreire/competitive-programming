creditos = input().split()
creditos[0] = int(creditos[0])
creditos[1] = int(creditos[1])
creditos[2] = int(creditos[2])

if creditos[0] == creditos[1] or creditos[1] == creditos[2] or creditos[2] == creditos[0] or creditos[0] == creditos[1] + creditos[2] or creditos[1] == creditos[0] + creditos[2] or creditos[2] == creditos[1] + creditos[0]:
  print("S")
else:
  print("N")