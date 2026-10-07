// Multiply two matrices and store the result in a third matrix. Pay attention to the matrix dimension requirements!
#include<stdio.h>
int main (){
     int N,M,X;
    printf("Enter no. of rows of martix 1 = ");
    scanf("%d",&N);
    printf("Enter no. of columns of martix 1= ");
    scanf("%d",&M);
    printf("To multiply 2 matrixs column of matrix 1 must be equal to rows of matrix 2 ,So Rows of matrix 2 = %d \n",M);
    printf("Enter no. of columns of matrix 2 = ");
    scanf("%d",&X);
    int matrix1[N][M],matrix2[M][X];
    printf("for matrix 1 :\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("Enter %d,%dth term of matrix = ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("for matrix 2 :\n");
    for(int i=0;i<M;i++){
        for(int j=0;j<X;j++){
            printf("Enter %d,%dth term of matrix = ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    int matrix3[N][X];
    for(int i=0;i<N;i++){
        for(int j=0;j<X;j++){
            matrix3[i][j]=0;
            for(int k=0;k<M;k++){
                matrix3[i][j]=matrix3[i][j]+matrix1[i][k]*matrix2[k][j];
            }
            
        }
    }printf("Multiply of matrix = \n");
    for(int i=0;i<N;i++){
        for(int j=0;j<X;j++){
            printf("%d\t",matrix3[i][j]);
        }printf("\n");
    }
    return 0;
}