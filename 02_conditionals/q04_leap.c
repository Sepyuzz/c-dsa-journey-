//Check whether a year is a leap year.
#include<stdio.h>
int main (){
    int y;
    printf("enter the year  = ");
    scanf("%d",&y);
    if(y%4==0){
        if(y%100!=0){
        printf("%d is a leap year ",y);
    }else if(y%400 ==0){
        printf("%d is a leap year ",y);
    } else{
        printf("%d is not a leap year ",y);
    }
    }else{
        printf("%d is not a leap year ",y);
    }
    return 0;
}