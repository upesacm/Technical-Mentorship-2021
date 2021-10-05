#question 1 Write a program to input a number and display all the even numbers till that number

num = int(input("enter any number of choice - "))
i=0

while i!=num: # run loop till the number and check if it is divisible by 2 and is not 0
	if i%2==0 and i!=0:
		print(i)
	i+=1

print("end of program 1 \n")

# question 2 Write a program to determine whether a number is a palindrome or not.

num = int(input("enter any number of choice - "))
x = num
rev = 0 # store number in a variable and make 2 variables to store remainder and the reversed number

while num!=0: 
	rem = num%10
	num = num//10
	rev = rev*10 + (rem)

if x==rev:
	print(rev,"is a palindrome ")
else:
	print(rev,"is not a palindrome ")

print("end of program 2\n")
