// print * triangle :normal,upside down and mirror of both
#include <stdio.h>
int main (){
    char ch='*';
    int h; //height of triangle 
    printf("Enter height of triangle = ");
    scanf("%d",&h);
    for (int i=1;i<=h;i++){
        for(int j=1;j<=i;j++){
            printf("%c",ch);
        }
        printf("\n");
    }  printf("\n");
    for (int i=h;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%c",ch);
        }
        printf("\n");
    }  printf("\n");
    for (int i=1;i<=h;i++){
        for(int k=0;k<=h-i;k++){
            printf("%c",' ');
        }
        for(int j=1;j<=i;j++){
            printf("%c",ch);
        }
        printf("\n");
    }  printf("\n");
    for (int i=1;i<=h;i++){
        for(int k=0;k<=i-1;k++){
            printf("%c",' ');
        }
        for(int j=h;j>=i;j--){
            printf("%c",ch);
        }
        printf("\n");
    } 


    return 0;
}