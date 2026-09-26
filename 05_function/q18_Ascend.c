// Write a function that takes an array and its size and determines whether the array is sorted in ascending order.
#include <stdio.h>
void sao(int num[],int size);//sao=sorted in ascending order
int main(){
    int size;
    printf("enter size of array ");
    scanf("%d",&size);
    int num[size];
    for(int i=0;i<size;i++){
        printf("Enter %dth term = ",i);
        scanf("%d",&num[i]);
    }
    sao(num,size);
    return 0;
}
void sao(int num[],int size){
    int p=0;
    for(int i=0;i<size-1;i++){
        if(num[i]<=num[i+1]){
            p=1;
        }
    }
    if(p==0){
        printf("Array of numbers are not sorted as ascending order\n");
    }else{
        printf("Array of numbers are sorted as ascending order\n");
    }
}