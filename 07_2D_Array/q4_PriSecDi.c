// Given a square matrix ($N \times N$), print the elements of the primary diagonal and the secondary diagonal.
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
    }printf("Terms of primary diagonals : \n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                printf("%d\t",matrix[i][j]);
            }
        }
    }printf("\n");
    printf("Terms of secondary diagonals : \n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i+j==N-1){
                printf("%d\t",matrix[i][j]);
            }
        }
    }
    return 0;
}