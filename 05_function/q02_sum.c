// Write a function add(int a, int b) that returns the sum of two integers.
#include <stdio.h>
void add(int a,int b){
    printf("Sum = %d\n",a+b);
}
int main(){
    int x,y;
    printf("enter first number = ");
    scanf("%d",&x);
    printf("enter second number = ");
    scanf("%d",&y);
    add(x,y);
return 0;
}