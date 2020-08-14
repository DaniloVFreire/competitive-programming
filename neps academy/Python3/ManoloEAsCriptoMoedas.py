quant = int(input())
valor = list(map(float, input().split()))
print("{:.2f}".format((valor[-1]-valor[0])*100))