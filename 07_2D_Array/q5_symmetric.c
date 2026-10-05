// Check whether a given square matrix is symmetric ($A[i][j] == A[j][i]$ for all $i, j$).
#include<stdio.h>
int main(){
    int N;
    printf("Enter no. rows or columns of square martix = ");
    scanf("%d",&N);
    int matrix[N][N],s=0 ;
    printf("for matrix :\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("Enter %d,%dth term of matrix = ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }int p=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(matrix[i][j]==matrix[j][i]){
                p=1;
            }
        }
    }
    if(p==1){
                printf("It is a symmetric matix ");
            }else{
                printf("It is not a symmetric matix ");
            }
    return 0;
}