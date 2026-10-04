//  Given an $N \times M$ matrix, store and print its transpose (convert rows into columns).
#include<stdio.h>
int main(){
    int N,M;
    printf("Enter no. of rows of martix = ");
    scanf("%d",&N);
    printf("Enter no. of columns of martix = ");
    scanf("%d",&M);
    int matrix[N][M],s=0 ;
    printf("for matrix :\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("Enter %d,%dth term of matrix = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Transpose of matrix : \n");
    for(int j=0;j<M;j++){ 
        for(int i=0;i<N;i++){
            printf("%d\t",matrix[i][j]);
        }printf("\n");
    }
    return 0;
}