//Print the multiplication table of a number.
#include <stdio.h>
int main(){
    int n ;
    printf("Enter n = ");
    scanf("%d",&n);
    printf("Table of %d: \n",n);
    for (int i =1;i<=10;i++){
        printf("%d\n",i*n);
    }
    return 0;
}