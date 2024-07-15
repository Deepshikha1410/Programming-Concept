#include<stdio.h>
void print(int n){
    if(n==0) return;
    printf("number n is: %d\n",n);
    print(n-1);
}

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    print(n);

    return 0;

}

