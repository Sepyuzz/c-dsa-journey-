//Given a character, convert uppercase → lowercase and lowercase → uppercase without using a library conversion function.
#include <stdio.h>
int main(){
    char ch;
    printf(" Enter a character{(a to z)or(A to Z)} = ");
    scanf("%c",&ch);
    if (ch<='z' && ch >='a'){
        printf("%c",ch-(char)32);    
    }
    else if(ch<='Z' && ch >='A'){
        printf("%c",ch+(char)32);
    }
    return 0;
}