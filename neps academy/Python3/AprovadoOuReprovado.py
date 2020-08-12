x, y = input().split()
x = float(x)
y = float(y)
z = float((x+y)/2)

if z >= 7:
    print("Aprovado")
elif z >= 4:
    print("Recuperacao")
else:
    print("Reprovado")
