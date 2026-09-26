// Write a function that takes an array and its size and rotates the array one position to the right.
#include<stdio.h>
void PoTR(int num[],int n);
int main (){
    int size;
    printf("enter size of array ");
    scanf("%d",&size);
    int num[size];
    for(int i=0;i<size;i++){
        printf("Enter %dth term = ",i);
        scanf("%d",&num[i]);
    }
    PoTR(num,size);
    return 0;    
}
void PoTR(int *num,int n){
    int tem[n];
    for(int i=0;i<n;i++){
        if(i==n-1){
            tem[0]=num[i];
        }else{
            tem[i+1]=num[i];
        }
    }
    for(int i=0;i<n;i++){
        num[i]=tem[i];
        printf("%d  \n",num[i]);
    }
}