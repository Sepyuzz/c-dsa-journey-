// Check whether a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main (){
    int n,p=1; //p=no. of digit
    printf("Enter a number = ");
    scanf("%d",&n);
    for(int i=1;i*10<=n;i=i*10){
        p++;
    }
    int m=n,t,q=0; 
    for(int i=1;i<=p;i++){
        t=m%10;
        q=q+pow(t,p);
        m=m/10;
    }
    if(n==q){
        printf("%d is an armstrong no.",n);
    }
    return 0;
}