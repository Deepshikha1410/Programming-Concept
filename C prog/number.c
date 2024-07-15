#include<stdio.h>
int main(){
    int x;
    printf("enter a number: \n");
    scanf("%d",&x);

    if(x >0)
    {
        printf("number is positive");
    }
    if(x < 0)
    {
        printf("number is negative");
    }
    if(x =0)
    {
        printf("number is neither negative nor positive");
    }

    return 0;
}