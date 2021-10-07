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