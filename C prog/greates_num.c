#include<stdio.h>
int main(){
    int x;
    printf("ernter the value: ");
    scanf("%d",&x);

    int y;
    printf("enter the value: ");
    scanf("%d",&y);

    int z;
    printf("enter the value: ");
    scanf("%d",&z);

    if(x>y && x >z)
    {
        printf("x is greatest");
    }
    else if(y>x && y>z)
    {
        printf("y is greatest");
    }
    else if(z>x && z>y)
    {
        printf("z is greatest");
    }
    return 0;
}