// Reverse a number.
#include <stdio.h>
int main (){
    int n,p,t=0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(int i=1;n!=0;i=i*10){
       p=n%10;
         t=t*10+p;
         n=n/(10);    
    }  
    printf("so, reverse is %d = ",t);
    return 0;
}
