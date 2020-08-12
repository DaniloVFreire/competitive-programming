data1 = [int(input()), int(input()), int(input())]
data2 = [int(input()), int(input()), int(input())]

segundos = ((((data2[0]-data1[0])*24) + (data2[1]-data1[1]))*60 + (data2[2]-data1[2]))*60
print(segundos)