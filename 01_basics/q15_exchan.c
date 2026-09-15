//Given two integers a and b, exchange their values using pointers.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter value of a = ");
    scanf("%d",&a);
    printf("enter value of b = ");
    scanf("%d",&b);
    int *ptr=&a;
    *ptr=b;
    b=*ptr;
    printf("a is =%d\n",a);
    printf("b is =%d",b);
    return 0;
}