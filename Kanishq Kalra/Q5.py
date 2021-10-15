import math
a=int(input("Enter a"))
b=int(input("Enter b"))
c=int(input("Enter c"))
d=(b**2)-4*a*c
sqr=math.sqrt(abs(d))
if d==0:
    print("Roots are real and equal")
    print(-b/(2*a))
elif d>0:
    print("Roots are real and different")
    print((-b+sqr)/2*a," ,")
    print((-b-sqr)/2*a)
else:
    print("Roots are imaginary and unequal")
    print((-b)/2*a," +i",sqr)
    print((-b)/2*a," -i",sqr)

