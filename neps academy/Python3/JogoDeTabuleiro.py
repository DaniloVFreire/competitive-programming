tam = int(input())
tabuleiro = [ input().split() for i in range(tam)]
branco = 0
for i in range(1, tam):
  for j in range(1, tam):
    if tabuleiro[i][j-1] == '0':
      branco += 1
    if tabuleiro[i-1][j-1] == '0':
      branco += 1
    if tabuleiro[i-1][j] == '0':
      branco += 1

    if branco > 1:
      tabuleiro[i][j] = '1'
    else:
      tabuleiro[i][j] = '0'
    branco = 0

print(tabuleiro[tam-1][tam-1])
for i in range(tam):
  for j in range(tam):
    print(tabuleiro[i][j],end=" ")
  print()
