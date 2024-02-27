limoes, preco = input().split()
limoes = int(limoes)
preco = int(preco)
if(limoes >= preco):
  print(int(((preco + 1)*preco)/2 + limoes-preco))
else:
  print(int(((preco + (preco - (limoes - 1)))*limoes)/2))
