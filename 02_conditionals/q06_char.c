// Check whether a character is an uppercase letter, lowercase letter, digit, or special character.
#include <stdio.h>
int main (){
    char ch;
    printf("enter any character  = ");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z'){
        printf("Character is an Uppercase letter ");
    }else if(ch>='a' && ch<='z'){
        printf("Character is an Lowercase letter ");
    }else if(ch>=0 && ch<=9){
        printf("Character is a digit ");
    }else{
        printf("%c is a Speacial character ",ch);
    }
    return 0;
}