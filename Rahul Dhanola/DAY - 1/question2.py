
n=input("enter the number: ")

flag=0

for i in range((len(n)//2)+1):
    
    if(n[i]==n[len(n)-i-1]):
        
        continue
        
    else:
        
        flag=1
        
        break

if(flag==1):
    print(n,"is not palindrome")

else:
    
    print(n,"is palindrome")