//Given three sides, determine whether a triangle is valid
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first side= ");
    scanf("%d",&a);
    printf("Enter second side= ");
    scanf("%d",&b);
    printf("Enter third side= ");
    scanf("%d",&c);
    if (a+b>c && b+c>a && c+a>b){
       printf("triangle is valid");
    }else{
         printf("triangle is invalid");
    }
    return 0;
}