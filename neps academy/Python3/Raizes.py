import math
q = int(input())
x = input().split()
for c in x:
    print("{:.4f}".format(math.sqrt(float(c))))