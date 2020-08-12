tempo = [int(input()), int(input()), int(input())]
ordem = sorted(tempo)
if tempo[0] == tempo[1] and tempo[1] == tempo[2]:
    print(2)
    print(2)
    print(2)
else:
    for c in ordem:
        for d in range(0, 3):
            if tempo[d] == c:
                print(d + 1)
