// print:
// *****
// *   *
// *   *
// *   *
// *****
#include <stdio.h>
int main(){
    int a;
    printf("enter Side of square = ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if((i==1 || i==a ) ){
               printf("%c",'*'); 
            }
            else if((j==1 || j==a ) ){
               printf("%c",'*'); 
            }else{
               printf("%c",' ');
            }
        }
             printf("\n");
    }
}