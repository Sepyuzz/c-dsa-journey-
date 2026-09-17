// Check whether a number is prime.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    for (int i=2;i<n;i++){
        if (n%i!=0){
            printf("%d is a prime no.",n);
            break;
        }else{
            printf("%d is not a prime no.",n);
            break;
        }
    }
    return 0;
}