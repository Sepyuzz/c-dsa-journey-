// Write a function isEven(int n) that returns whether a number is even or odd.
#include <stdio.h>
void  isEven(int a){
    if(a%2==0){
        printf("%d is even\n",a);
    }else{
        printf("%d is odd\n",a);
    }
}
int main(){
     int x;
    printf("enter number = ");
    scanf("%d",&x);
    isEven(x);
return 0;
}