
#include <iostream>

using namespace std;

int main(){
    
    int days,year,months;

    cout<<"\nenter the integer: ";
    
    cin>>days;

    if(days>0){
        
        year=days/365;
    
        days%=365;
    
        months=days/31;
    
        days%=31;
    
        cout<<"the number of:\nyears = "<<year<<"\nmonths = "<<months<<"\ndays = "<<days<<endl;
        
    }

    else{
        
        
        cout<<"Please enter the corect date!!! ";
        
    }
        
    
    return 0;
    
}