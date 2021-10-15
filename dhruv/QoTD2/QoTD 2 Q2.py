n= int(input("Enter n:"))
rows = n+1
for i in range(rows):
    for j in range(i, rows):
        print("*", end=' ')
    print('')
