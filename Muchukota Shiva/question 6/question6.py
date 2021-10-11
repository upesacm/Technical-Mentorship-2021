i,j=0,0
n=int(input("enter number of rows you want - "))

for i in range(0,n):
	for j in range(n,i,-1):
		print("*",end="")
	print()