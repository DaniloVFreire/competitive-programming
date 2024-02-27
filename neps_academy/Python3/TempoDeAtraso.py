tempo = [int(input()), int(input()), int(input()), int(input())]
diferenca = (((tempo[2] - tempo[0])*60) + (tempo[3] - tempo[1]) - 45)

if diferenca >= 0:
  print("Sucesso")
else:
  print("Atrasado", diferenca*-1)