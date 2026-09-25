// Print Pascal's triangle
#include <stdio.h>
int main(){
    int h;
    printf("Enter height of triangle = ");
    scanf("%d",&h);
    int Num[100][100]; 
    Num[0][0]=1;
    for(int i=0;i<h;i++){
        for(int k=0 ;k<h-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            if(i==0 && j==0){
                printf("%d",1);
            }
            else if(j==0 || j==i){
                Num[i][j]=1;
                printf("%d ",1);
            }else{
                Num[i][j]=Num[i-1][j-1] + Num[i-1][j];
                printf("%d,",Num[i][j]);
            }
        }
         printf("\n");
    }
    return 0;
}