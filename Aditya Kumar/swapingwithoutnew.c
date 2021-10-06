#include<stdio.h>
int main(){
    int x,y;
    do
    {
        scanf("%d %d",&x,&y);
    }
    while(x<0 && y<0);
    printf("%d %d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d %d",x,y);
}