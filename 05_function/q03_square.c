// Write a function square(int n) that returns the square of a number.
#include <stdio.h>
void square(int a){
    printf("Square of %d = %d\n",a,a*a);
}
int main(){
    int x;
    printf("enter number = ");
    scanf("%d",&x);
    square(x);
return 0;
}