
n=int(input("enter the integer: "))

if(n>0):
    year=n//365
    
    n%=365
    
    months=n//31
    
    n%=31
    
    
    
    print("the number of:\nyears =",year,"\nmonths =",months,"\ndays =",n)
    
else:
    print("Please enter the corect date!!! ")
    