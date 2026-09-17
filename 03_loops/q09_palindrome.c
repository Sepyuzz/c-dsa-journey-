// q09_palindrome.c
// Check whether a number is a palindrome.
#include <stdio.h>
int main (){
    int n,p,t=0;
    printf("Enter n = ");
    scanf("%d",&n);
    int m=n;
    for(int i=1;m!=0;i=i*10){
       p=m%10;
         t=t*10+p;
         m=m/(10);    
    }   
    if(t==n){
        printf("%d is a palindrome number",n);
    }
    else {
       printf("%d is not a palindrome number",n); 
    }
    return 0;
}