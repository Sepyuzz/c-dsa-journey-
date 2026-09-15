//Given an integer n, determine how 
// many digits it contains without converting it to a string.
#include <stdio.h>
int main(){
    int p,t=1,i;
    printf("enter a number = ");
    scanf("%d",&p);
    for(i=1;i*10<=p;i=i*10){
        t++;

    }
    printf("so no. of digits = %d",t);
    return 0;
}