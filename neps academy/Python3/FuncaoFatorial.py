def fatorial(N):
    if N >= 1:
        return N * fatorial(N - 1)
    else:
        return 1

N = int(input())
print(fatorial(N))
