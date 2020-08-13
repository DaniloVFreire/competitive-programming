a1, a2, a3 = int(input()), int(input()), int(input())
ops = [((a1*2)+a2)*2, (a2+(a3*2))*2, (a1+a3)*2]
ops.sort()
print(ops[0])