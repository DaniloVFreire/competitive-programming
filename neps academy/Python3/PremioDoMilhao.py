quantidade = int(input())

resposta = 0
para = 0
for i in range(quantidade):
    resposta = int(resposta) + int(input())
    if resposta >= 1000000 and para == 0:
        para = 1
        print(i+1)
