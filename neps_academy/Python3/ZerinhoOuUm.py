a, b, c = input().split()

if a != b and a != c:
    print("A")
elif b != c and b != a:
    print("B")
elif c != a and c != b:
    print("C")
else:
    print("*")