#include<stdio.h>
void print(int x,int n){
    if(x>n) return;
    printf("%d is the num",n);
    print(x+1,n);
}

int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    print(1,n);
    return 0;
}