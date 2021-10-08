
#include <stdio.h>


int main(){
    
    int days,year,months;

    printf("\nenter the integer: ");
    
    scanf("%d",&days);

    if(days>0){
        
        year=days/365;
    
        days%=365;
    
        months=days/31;
    
        days%=31;
    
        printf("\nthe number of:\nyears = %d\nmonths = %d\ndays = %d\n",year,months,days);
        
    }

    else{
        
        
        printf("\nPlease enter the corect date!!! ");
        
    }
        
    
    return 0;
    
}