valor = int(input())
UmReal = int(valor/100)
valor = valor % 100
CinquentaCentavos = int(valor/50)
valor = valor % 50
VinteECincoCentavos = int(valor/25)
valor = valor % 25
DezCentavos = int(valor/10)
valor = valor % 10
CincoCentavos = int(valor/5)
valor = valor % 5
UmCentavo = valor
MoedasTotais = UmReal + CinquentaCentavos + VinteECincoCentavos + DezCentavos + CincoCentavos + UmCentavo

print(MoedasTotais)
print(UmReal)
print(CinquentaCentavos)
print(VinteECincoCentavos)
print(DezCentavos)
print(CincoCentavos)
print(UmCentavo)