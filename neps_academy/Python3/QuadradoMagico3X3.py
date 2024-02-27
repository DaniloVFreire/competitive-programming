quadrado =[[int(input()), int(input()), int(input())],
          [int(input()), int(input()), int(input())],
          [int(input()), int(input()), int(input())]]

if ((quadrado[0][0] + quadrado[0][1] + quadrado[0][2]) == (quadrado[1][0] + quadrado[1][1] + quadrado[1][2])
and (quadrado[2][0] + quadrado[2][1] + quadrado[2][2]) == (quadrado[1][0] + quadrado[1][1] + quadrado[1][2])
and (quadrado[0][0] + quadrado[1][0] + quadrado[2][0]) == (quadrado[0][1] + quadrado[1][1] + quadrado[2][1])
and (quadrado[0][1] + quadrado[1][1] + quadrado[2][1]) == (quadrado[0][2] + quadrado[1][2] + quadrado[2][2])
and (quadrado[0][0] + quadrado[1][0] + quadrado[2][0]) == (quadrado[0][0] + quadrado[0][1] + quadrado[0][2])
and (quadrado[0][0] + quadrado[1][1] + quadrado[2][2]) == (quadrado[0][2] + quadrado[1][1] + quadrado[2][0])
and (quadrado[0][0] + quadrado[1][0] + quadrado[2][0]) == (quadrado[0][0] + quadrado[1][1] + quadrado[2][2])):
  print("SIM")
else:
  print("NAO")
