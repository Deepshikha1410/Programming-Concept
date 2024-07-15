#include<stdio.h>
int main(){
    int x;
        printf("enter the first value; ");
        scanf("%d",&x);
    int y;
        printf("enter the value; ");
        scanf("%d",&y);
    int z;
        printf("enter the value; ");
        scanf("%d",&z);

    if(x+y >z && x+z>y && z+y>x)
    {
        printf("the sides are triangles");
    }
    else
    {
        printf("the sides are not triangle");
    }

    return 0;
}