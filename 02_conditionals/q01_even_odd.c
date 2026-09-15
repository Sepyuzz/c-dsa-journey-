//Check whether a number is even or odd.
#include <stdio.h>
int main (){
    int p;
    printf("enter an integer = ");
    scanf("%d",&p);
    if (p%2==0){
        printf("%d is even ",p);
    }else {
        printf("%d is odd ",p);
    }
    return 0;
}