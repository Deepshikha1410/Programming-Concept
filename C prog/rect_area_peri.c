#include<stdio.h>
int main(){
    int len;
    int breadth;

    printf("enter the value of len: ");
    scanf("%d",&len);

    printf("enter the value of breadth: ");
    scanf("%d",&breadth);

    float area = len * breadth;
    float peri = 2*(len+breadth);

    printf("area of rectangle is %f\n",area);
    printf("peri of rectangle is %f\n",peri);


    if( area < peri)
    {
        printf("area of rectangle is not greater\n");
    }
    else
    {
        printf("area of rectangle is greater than perimeter\n");
    }


    return 0;
}