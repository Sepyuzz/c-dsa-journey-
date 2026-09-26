// Write a function that takes two integers a and b and returns their GCD.
#include <stdio.h>
void GCD(int a,int b);
int main(){
    int Num1,Num2;
    printf("Enter first number = ");
    scanf("%d",&Num1);
    printf("Enter second number = ");
    scanf("%d",&Num2);
    GCD(Num1,Num2);
    return 0;
}
void GCD(int a,int b){
    int i,p=1;
    if(a>b){
        for(i=b;i>1;i--){
            if(a%i==0 && b%i==0){
                p=1;
                break;
            }else{
                p=0;
            }
        }
    }else{
        for(i=a;i>1;i--){
            if(a%i==0 && b%i==0){
                p=1;
                break;
            }else{
                p=0;
            }
        }
    }
    if(p==1){
        printf("GCD = %d\n",i);
    }else{
        printf("GCD = 1\n");
    }
}