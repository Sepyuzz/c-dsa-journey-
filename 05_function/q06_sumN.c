// Write a function that takes an integer n and returns the sum of numbers from 1 to n.
#include <stdio.h>
void sum(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }printf("sum of first %d integers is %d \n",n,sum);
}
int main(){
    int x;
    printf("enter number = ");
    scanf("%d",&x);
    sum(x);
return 0;
}