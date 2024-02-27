x = int(input())
y = input().split()
for i in range(x):
    y[i] = int(y[i])

y.sort()

for c in y:
    print("{}".format(c), end=' ')
