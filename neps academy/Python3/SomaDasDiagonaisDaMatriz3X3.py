matriz = [[int(input()), int(input()), int(input())], [int(input()), int(input()), int(input())], [int(input()), int(input()), int(input())]]

print("Diagonal principal: {}".format(matriz[0][0]+matriz[1][1]+ matriz[2][2]))
print("Diagonal secundaria: {}".format(matriz[0][2]+matriz[1][1]+ matriz[2][0]))
