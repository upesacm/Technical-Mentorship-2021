#Swapp= two numbers without using a third temporary variable
a=int(input("Enter a number"))
b=int(input("Enter another number"))
print("a=",a)
print("b=",b)
a=a+b
b=a-b
a=a-b
print("a=",a)
print("b=",b)
