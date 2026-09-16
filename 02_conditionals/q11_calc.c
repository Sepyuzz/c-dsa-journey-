//Build a simple calculator using switch.
#include <stdio.h>
int main (){
    float a,b ;
   
    printf("first no.= ");
    scanf("%f",&a);
    printf("second no.= ");
    scanf("%f",&b);
    
    printf("Enter operator =  ");

      char op;
      scanf(" %c",&op);
    switch(op){
        case '+':
         printf("sum =%f",a+b);
        break;
        case '-': 
        printf("difference =%f",a-b);
        break;
        case '/': 
        printf("Quotient =%f",a/b);
        break;
        case '*': 
        printf("product =%f",a*b);
        break;
        default :  printf("Invalid operator");
    }
    return 0;
}