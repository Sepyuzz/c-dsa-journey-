// Check whether a number is prime.
#include <stdio.h>
int main(){
    int n,p=1;
    printf("Enter a number = ");
    scanf("%d",&n);
    if (n<=1){
        p=0;
    }else{
        for (int i=2;i*i<n;i++){
            if(n%i==0){
                p=0;
            }
        }
     }
    if(p==1){
        printf("%d is a prime no.",n);
    }
    else{
        printf("%d is not a prime no.",n);
    }
    return 0;
}