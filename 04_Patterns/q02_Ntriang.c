// print number triangle :normal,upside down and mirror of both
#include <stdio.h>
int main (){
    int h;
    printf("enter height of triangle = ");
    scanf("%d",&h);
    for (int i=1;i<=h;i++){
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }printf("\n");
    }printf("\n");

     for (int i=1;i<=h;i++){
        for (int j=1;j<=i;j++){
            printf("%d",i);
        }printf("\n");
    }printf("\n");

     for (int i=1;i<=h;i++){
        for (int j=1;j<=h+1-i;j++){
            printf("%d",j);
        }printf("\n");
    }printf("\n");

     for (int i=1;i<=h;i++){
        for (int k=0;k<=h-i;k++){
            printf("%c",' ');
        }
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }printf("\n");
    }printf("\n");

     for (int i=1;i<=h;i++){
        for (int j=1;j<=i;j++){
            if((i+j)%2==0 ){
                 printf("1");
            }else{
                 printf("0");
            }
           
        }printf("\n");
    }printf("\n");
    return 0;
}