notas = [int(input()), int(input())]
media = ( (notas[0] * 2) + (notas[1] * 3) ) / 5
if media >= 7:
  print("Aprovado")
elif media < 3:
  print("Reprovado")
else:
  print("Final")