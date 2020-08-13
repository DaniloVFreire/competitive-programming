cartas = [input(), input(), input()]

if cartas[0] == cartas[1]:
  print(cartas[2])
elif cartas[1] == cartas[2]:
  print(cartas[0])
else:
  print(cartas[1])