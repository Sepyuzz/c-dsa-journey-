//Find the sum of all even numbers from 1 to N.
#include <stdio.h>
int main(){
      int n,p=0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0)
       { p+=i;}
        }printf("sum is %d",p);
return 0;
}