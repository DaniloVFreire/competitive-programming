quantidade = int(input())

a = int(0)
b = int(0)

jogadas = input().split()

for i in range(quantidade):
    if jogadas[i] == "1":
        a = a - 1
        if a < 0:
            a = a * -1
    elif jogadas[i] == "2":
        a = a - 1
        b = b - 1
        if a < 0:
            a = a * -1
        if b < 0:
            b = b * -1
print(a)
print(b)
