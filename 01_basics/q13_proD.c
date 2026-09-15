//Given an integer n, calculate the product of its digits.
#include<stdio.h>
int main(){
    int p,q=1;
    printf("enter a number = ");
    scanf("%d",&p);
    for(int i=1;p!=0;i++){
    int n=p%10;
    q=q*n;
    p=p/10;
    }
    printf("sum of digits =%d",q);
    return 0;
} 