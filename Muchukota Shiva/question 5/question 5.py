import math # check if you have math.py or not

a=int(input("enter value 1 - "))
b=int(input("enter value 2 - "))
c=int(input("enter value 3 - "))
root,r1,r2,d=0,0,0,0

d=int((b**2)-4*a*c)
print(d)
root = math.sqrt(d)#getting error math not defined 
print(root)

if d>=0:
	if d>0:
		r1=(-1*(b+root))/(2*a)
		r2=(-1*(b-root))/(2*a)
		print("real and distinct roots")
		print("the roots are",r1,"and",r2)
	else:
		r1=r2=(-1*b)/(2*a)
		print("both the roots are same that is",r1)
#space
else:
	print("roots are complex and are",r1=((-b/(2*a)),"+ i",root),r2=((-b/(2*a)),"- i",root))
