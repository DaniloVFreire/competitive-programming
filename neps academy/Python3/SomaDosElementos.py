quantidade = int(input())

lista = input().split()
resposta = int(0)

for i in range(quantidade):
    resposta = int(resposta) + int(lista[i])

print(resposta)