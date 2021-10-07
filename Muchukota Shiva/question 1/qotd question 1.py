#question 1 Write a program to input a number and display all the even numbers till that number

num = int(input("enter any number of choice - "))
i=0

while i!=num: # run loop till the number and check if it is divisible by 2 and is not 0
	if i%2==0 and i!=0:
		print(i)
	i+=1

print("end of program 1 \n")


