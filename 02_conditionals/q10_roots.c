// Find the roots of a quadratic equation and handle the cases of:
// two real roots
// one real root
// complex roots
#include <stdio.h>
#include <math.h>
int main (){
    float  a,b,c;
    printf("if ax^2+bx+c=0 \n");
    printf("enter a =");
    scanf("%f",&a);
    printf("enter b =");
    scanf("%f",&b);
    printf("enter c =");
    scanf("%f",&c);
    float x1=(-b+pow((b*b-4*a*c),0.5))/(2*a);
    float x2=(-b-pow((b*b-4*a*c),0.5))/(2*a);
     
    if(b*b-4*a*c<0){
        printf("roots are complex");
    }else if(b*b-4*a*c==0){
        printf("1 real root");
    }else{
        printf("roots are real");
    }
    return 0;
}