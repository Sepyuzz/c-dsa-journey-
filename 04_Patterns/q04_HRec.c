// Print a hollow rectangle of N × M.
#include <stdio.h>
int main (){
     int h,w;
    printf("enter height of rectangle = ");
    scanf("%d",&h);
     printf("enter width of rectangle = ");
    scanf("%d",&w);
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if((i==1 || i==h ) ){
               printf("%c",'*'); 
            }
            else if((j==1 || j==w ) ){
               printf("%c",'*'); 
            }else{
               printf("%c",' ');
            }
        }
             printf("\n");
    }
return 0;
}