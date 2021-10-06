#Calculate the years, months, and days from a given integer. Also, implement the necessary conditional statements to make sure the number entered is a positive, non-zero integer.
a=int(input("Enter a number"))
if a>0:
    years=a//365
    months=(a-years*365)//30
    days=(a-years*365-months*30)
    print(years, "Years", months, "Months", days, "Days")
else:
    print("Please enter a positive value")
