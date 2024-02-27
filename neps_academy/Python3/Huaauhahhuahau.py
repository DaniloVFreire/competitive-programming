risada = input()

vogais = ['a', 'e', 'i', 'o', 'u']

resultado = ''

for c in risada:
    if c in vogais:
        resultado += c

if resultado == resultado[::-1]:
    print("S")
else:
    print("N")

