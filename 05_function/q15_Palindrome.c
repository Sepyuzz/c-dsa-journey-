// Write a function that determines whether a number is a palindrome.
#include<stdio.h>
void Palindrome(int n);
int main (){
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);
    Palindrome(num);
    return 0;
}
void Palindrome(int n){
    int m=0,p,z=n;
    for(int i=1;z!=0;i++){
        p=z%10;
        m=m*10+p;
        z=z/10;
    }
    if(m==n){
        printf("%d is palindrome\n",n);
    }else{
        printf("%d not is palindrome\n",n);
    }
}