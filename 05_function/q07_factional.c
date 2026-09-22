// Write a function that takes n and returns n!.
#include <stdio.h>
void factorial(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*i;
        
    }printf("so factorial of %d is %d \n",n,p);
}
    int main (){
    int x;
    printf("enter number = ");
    scanf("%d",&x);
    factorial(x);
    return 0;
 }
