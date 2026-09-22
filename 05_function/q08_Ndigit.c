// Write a function that takes an integer and returns the number of digits in it.
#include <stdio.h>
void digit(int n); 
int main(){
    int x;
    printf("enter number = ");
    scanf("%d",&x);
    digit(x);
return 0;
}
void digit(int n){
    int i;
     for(i=1;n!=0;i++){
         n=n/10;
     }
     printf("so no of digit is %d ",i-1);
}