//Take a 3-digit number and print its digits separately
#include <stdio.h>
int main (){
    int p;
    printf("Enter a 3 digit no.= ");
    scanf("%d",&p);
    int l=p/100,m=(p-l*100)/10,n=p-(l*100+m*10);
    printf("%d\n %d\n %d\n",l,m,n);
    return 0;
    
}