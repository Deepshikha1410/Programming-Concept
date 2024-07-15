#include<stdio.h>
int main(){
    int x;
    printf("enter the number: ");
    scanf("%d",&x);

    if(x%5==0 || x%3==0)
    {
        printf("the number is divisible by both\n");
    }
    else
    {
        printf("the number is not divisible by 5 and 3\n");
    }

    return 0;
}