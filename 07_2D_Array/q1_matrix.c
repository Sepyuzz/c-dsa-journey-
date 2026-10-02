// Take two $N \times M$ matrices as input and calculate their element-wise sum and difference into a third matrix.
#include<stdio.h>
int main(){
    int N,M;
    printf("Enter no. of rows of martix = ");
    scanf("%d",&N);
    printf("Enter no. of columns of martix = ");
    scanf("%d",&M);
    int matrix1[N][M],matrix2[N][M];
    printf("for matrix 1 :\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("Enter %d,%d the term of matrix 1 = ",i,j);
            scanf("%d",&matrix1[i][j]);
        }   
    }
     printf("for matrix 2 :\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("Enter %d,%d the term of matrix 2 = ",i,j);
            scanf("%d",&matrix2[i][j]);
        }   
    }int matrix3[N][M],matrix4[N][M];
     printf("so sum of matrix 1 & 2 : \n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
         matrix3[i][j]= matrix2[i][j]+matrix1[i][j];
         printf("%d\t",matrix3[i][j]);
        }printf("\n");
    }
     printf("so difference of matrix 1 & 2 : \n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
         matrix4[i][j]= matrix1[i][j]-matrix2[i][j];
         printf("%d\t",matrix4[i][j]);
        }printf("\n");
    }
    return 0;
}