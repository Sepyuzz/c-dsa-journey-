// Given an $N \times M$ matrix, calculate and print the sum of each row and each column individually.
#include<stdio.h>
int main(){
int N,M;
    printf("Enter no. of rows of martix = ");
    scanf("%d",&N);
    printf("Enter no. of columns of martix = ");
    scanf("%d",&M);
    int matrix1[N][M],s=0 ;
    printf("for matrix :\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("Enter %d,%d the term of matrix = ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Sum of rows : \n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            s+=matrix1[i][j];
        }printf("Sum of %dth row = %d \n",i+1,s);
        s=0;
    }
    printf("Sum of columns : \n");
    for(int j=0;j<M;j++){
        for(int i=0;i<N;i++){
            s+=matrix1[i][j];
        }printf("Sum of %dth column = %d \n",j+1,s);
        s=0;
    }
    return 0;
}