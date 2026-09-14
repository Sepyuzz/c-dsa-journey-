//Take an integer number of seconds
//  and convert it into hours, minutes and seconds.
#include <stdio.h>
int main (){
    int s;
    printf("enter seconds = ");
    scanf("%d",&s);
    int h=s/3600;
    printf("%d hours\t",h);
    int m=(s-h*3600)/60;
    printf("%d minutes\t",m);
    s=s-m*60-h*3600;
    printf("%d seconds",s);
    return 0;
}