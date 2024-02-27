import math
def eh_primo(x):
    total = 1
    if x==2:
        return total
    elif x==1:
        return 0
    else:
        for c in range(int(math.sqrt(x)), x):
            if x % c == 0:
                total = 0
    return total

x = int(input())
if eh_primo(x):
    print('S')
else:
    print('N')
