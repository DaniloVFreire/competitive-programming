posicao = [int(input()), int(input()), int(input())]

if posicao[1] >= posicao[2]:
  print(posicao[1]-posicao[2])
else:
  print((posicao[0] - posicao[2]) + posicao[1])
