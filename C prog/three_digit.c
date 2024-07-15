#include<stdio.h>
int main(){
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    
    // to check whether the number is 
    if(x>99 && x <1000)
    {

        printf("this is three digit number");
    }
    else
    {
        printf("this is not three digit number");
    }
  

    return 0;
}