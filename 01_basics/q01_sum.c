//Take two integers as input and print their sum, difference, product and quotient

#include <stdio.h>
int main(){
    int x,y;
    printf("enter first integer = ");
    scanf("%d" ,&x);
    printf("enter second integer = ");
    scanf("%d", &y);
    printf("sum= %d\n",x+y);
    printf("difference = %d\n",x-y);
    printf("product = %d\n" ,x*y);
    printf("quotient = %f\n",(float)x/y);
    return 0;
}