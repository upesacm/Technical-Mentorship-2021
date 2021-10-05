# question 1 write a program to swap two numbers without using a third variable

x=1
y=2
print("the value of x and y are",x,"and",y,"respectively\n")
x,y=y,x #swap value of x with y and vice versa in one step to remove need of third variable
print("after swapping the values of x and y are",x,"and",y,"respectively\nquestion 1 over\n\n")

#question 2 Calculate years months and days from a given integer

condition = "y"
E=1
while condition=="y": # will keep looping till it get a value of x that is a non-zero positive integer
	try: # will prevent float values from being entered 
		days=int(input("Enter the number of days to convert - "))
		if days<=0: # makes sure +ve value
			print("Invalid number entered. Please enter a non-zero positive integer\n\n")
			pass
		else:
			condition="no"
			print("\n\n")
	except:
		print("Invalid number entered. Please enter a non-zero positive integer\n\n")

y,m,ed,total=0,0,0,days # years , months , extra days

inty=int(days/365) # days divided by years = number of years + remainder 
days=int(days-(365*y)) # remove number of known years from total days
m=int(days/30) # remaining days divided by 30 = number of months + remainder
ed=days-(30*m) # remove the known months from remaining days to get extra days

print(total,"days equal",y,"years",m,"months and",ed,"days\nquestion 2 over\n")
