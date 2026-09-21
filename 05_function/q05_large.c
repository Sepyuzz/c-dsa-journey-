// Write a function maximum(int a, int b) that returns the larger of two numbers.
#include <stdio.h>
void maximum(int a,int b){
      if(a>b){
        printf("%d is larger\n",a);
    }else{
        printf("%d is larger\n",b);
    }
}
int main(){
    int x,y;
    printf("enter first number = ");
    scanf("%d",&x);
    printf("enter second number = ");
    scanf("%d",&y);
    maximum(x,y);
return 0;
}