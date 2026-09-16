//If valid, determine whether the triangle is:
// Equilateral
// Isosceles
// Scalene
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
        if(a==b && a==c){
            printf("triangle is  equilateral");
            
        }else if(a==b || a==c || b==c){
            printf("triangle is  isosceles");
        }else{
            printf("triangle is  scalene");
        }
    }else{
         printf("triangle is invalid");
    }
    return 0;
}