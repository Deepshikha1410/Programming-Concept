#include<stdio.h>
int main(){
    int cp;
    int sp;

    printf("enter the value of cp: ");
    scanf("%d",&cp);

    printf("enter the value of sp: ");
    scanf("%d",&sp);

    if(sp > cp)
    {

        printf("profit");
    }
    else if(sp < cp)
    {
        printf("loss");
    }
    else
    {
        printf("no loss no profit");
    }
    return 0;
}