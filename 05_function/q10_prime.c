// Write a function that takes an integer n and returns whether n is prime.
#include <stdio.h>
void prime(int n); 
int main(){
    int x;
    printf("enter number = ");
    scanf("%d",&x);
    prime(x);
return 0;
}
void prime(int n){
    int p=1;
    if(n<=1){
        p=0;
    }else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                p=0;
                break;
            }
        }
        
    }
    if(p==1){
        printf("%d is a prime\n",n);
    }
    else{
        printf("%d is not a prime\n",n);
    }

}