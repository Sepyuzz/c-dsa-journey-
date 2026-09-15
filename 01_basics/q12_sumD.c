//Given an integer n, calculate the sum of its digits.
#include <stdio.h>
int main(){
    int p,m=0;
    printf("enter a number = ");
    scanf("%d",&p);
    for(int j=1;p!=0;j++){
        int n=p%10;
        m=m+n;
        p=p/10;    
    }printf("sum of digits =%d",m);
    return 0;
}