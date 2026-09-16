//Find the sum of numbers from 1 to N.
#include <stdio.h>
int main (){
    int n,p=0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        p+=i;
        }printf("sum is %d",p);
return 0;
}