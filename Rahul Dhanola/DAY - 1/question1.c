#include <stdio.h>


int main(){
    
    int num,i;
    
    printf("\nenter the number: ");
    
    scanf("%d",&num);
    
    printf("even numbers in range 0 to %d are: \n\n",num);
    
    for(i=0;i<=num;i++){
        
        if(i%2==0){
            
            
            printf("%d\n",i);
            
        }
        
        
    }
    
    
    return 0;
    
    
}