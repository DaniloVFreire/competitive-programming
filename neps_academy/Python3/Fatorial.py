def fatorial(n):
  if n > 1:
    return (n * fatorial(n-1))
  else:
    return 1

valor = int(input())

print(fatorial(valor))