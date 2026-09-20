// Print a pyramid ,inverted pyramid of stars.
#include <stdio.h>
int main (){
    int h;
    printf("enter height of pyramid = ");
    scanf("%d",&h);
    for(int i=1;i<=h;i++){
        for(int j=1;j<=h-i;j++){    
            printf("%c",' ');
        } 
        for(int j=1;j<=i*2-1;j++){
             printf("%c",'*');}   
             
        
        printf("\n" );
    }
     printf("\n" );
    for(int i=1;i<=h;i++){
        for(int j=1;j<=i-1;j++){    
            printf("%c",' ');
        } 
        for(int j=1;j<=(h-i+1)*2-1;j++){
             printf("%c",'*');}   
             
        
        printf("\n" );
    }
    return 0;
}