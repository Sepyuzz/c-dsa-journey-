//Take a 3-digit number and reverse it.
#include <stdio.h>
int main (){
    int p;
    printf("Enter a 3 digit no.= ");
    scanf("%d",&p);
    int l=p/100,m=(p-l*100)/10,n=p-(l*100+m*10);
    p=n*100+m*10+l;
    printf("%d",p);
    return 0;
}