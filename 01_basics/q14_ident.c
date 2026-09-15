//Given an integer n, determine whether it is positive, negative, or zero without using nested if statements.
#include <stdio.h>
int main(){
    int p;
    printf("enter a number = ");
    scanf("%d",&p);
    if(p>0){
        printf("positive");
    }
    else if (p==0){
        printf("zero");
    }
    else {
        printf("negative");
    }
return 0;
}