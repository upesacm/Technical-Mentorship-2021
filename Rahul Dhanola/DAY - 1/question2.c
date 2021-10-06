#include <stdio.h>
#include <string.h>



int main(){
    
    char num[100];
    
    int flag=0;
    
    printf("\nenter the number to check for palindrome: ");
    
    scanf("%s",&num);
    
    for(int i=0;i<=(strlen(num)/2)-1;i++){
        
        if(num[i]==num[(strlen(num)-i-1)]){
            
            continue;
            
            
        }
        
        else{
            
            
            flag=1;
            
            break;
            
            
            
            
        }
        
        
    }
    
    
    if(flag==1){
        
        
        printf("\n the number is not palindrome: ");
        
        
    }
    
    
    else{
        
        
        printf("\n the number is palindrome: ");
        
    }
    
    
    return 0;
    
    
}