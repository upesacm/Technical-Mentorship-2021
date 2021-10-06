#include <iostream>


using namespace std;

int main(){
    
    int num;
    
    cout<<"\nenter the number: ";
    
    cin>>num;
    
    cout<<"even numbers in range 0 to "<<num<<" are: \n\n";
    
    for(int i=0;i<=num;i++){
        
        if(i%2==0){
            
            
            cout<<i<<endl;
            
        }
        
        
    }
    
    
    return 0;
    
    
}