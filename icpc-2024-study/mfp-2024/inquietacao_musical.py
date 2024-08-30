while True:
    try:
        line = input()
    except EOFError:
        break
    print(type(line))
    print(line)
