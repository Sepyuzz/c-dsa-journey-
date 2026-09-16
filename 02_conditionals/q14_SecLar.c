//Given three numbers, find the second largest number.
#include <stdio.h>
int main(){
    float x,y,z;
    printf("first no.= ");
    scanf("%f",&x);
    printf("second no.= ");
    scanf("%f",&y);
    printf("third no.= ");
    scanf("%f",&z);
    if(y>x && y>z){
        if (x>z){
            printf("%f is second largest",x);
        }else  {
            printf("%f is second largest",z);
        }

    }else if (x>y && x>z){
         if (y>z){
            printf("%f is second largest",y);
        }else  {
            printf("%f is second largest",z);
        }

    }else{
         if (y>x){
            printf("%f is second largest",y);
        }else  {
            printf("%f is second largest",x);
        }
    }
    return 0;
}