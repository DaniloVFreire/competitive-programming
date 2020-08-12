quantidade = int(input())

a = input()
b = input()
nota = int(0)

for c in range(quantidade):
    if a[c] == b[c]:
        nota = nota + 1

print(nota)
