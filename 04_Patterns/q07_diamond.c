// Print a Diamond Shape with stars
#include <stdio.h>
int main(){
    int h;
    printf("Enter length of upper half of diamond = ");
    scanf("%d",&h);
    for(int i=1;i<=h;i++){
        for(int k=0;k<h-i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    for(int i=1;i<=h;i++){
        for(int k=0;k<i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*(h-i)-1;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
}