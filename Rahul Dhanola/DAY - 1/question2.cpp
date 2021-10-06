#include <iostream>
#include <string.h>

using namespace std;


int main(){
    
    char num[100];
    
    int flag=0;
    
    cout<<"\nenter the number to check for palindrome: ";
    
    cin>>num;
    
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
        
        
        cout<<"\n the number is not palindrome: ";
        
        
    }
    
    
    else{
        
        
        cout<<"\n the number is palindrome";
        
    }
    
    
    return 0;
    
    
}