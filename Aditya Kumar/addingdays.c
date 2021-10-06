#include<stdio.h>
int main(){
    int n;
    do
    {
        scanf("%d ",&n);
    }
    while(n<0);
    scanf("%d",&n);
    printf("%d days %d months %d years",(int)n%30,(int)n/30,(int)n/365);
}   