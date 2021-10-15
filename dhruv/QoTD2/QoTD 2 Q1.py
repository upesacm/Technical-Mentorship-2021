import cmath

a = int(input("Enter a:"))
b = int(input("Enter b:"))
c = int(input("Enter c:"))


d = (b**2) - (4*a*c)


sol1 = (-b-cmath.sqrt(d))/(2*a)
sol2 = (-b+cmath.sqrt(d))/(2*a)

if d > 0:
    print('there are two distinct roots')
    print('The solution are {0} and {1}'.format(sol1,sol2))
elif d == 0:
    print('there is exactly one real root')
    print('The solution are {0} and {1}'.format(sol1,sol2))
else:
    print('there are no real roots')
    print('The solution are {0} and {1}'.format(sol1,sol2))


