// Write a function that takes an array and its size and returns the sum of all elements.
#include<stdio.h>
void ArrAll(int num[],int n);
int main (){
    int size;
    printf("Enter size of array ");
    scanf("%d",&size);
    int num[size];
    for(int i=0;i<size;i++){
        printf("enter %dth number of array = ",i);
        scanf("%d",&num[i]);
    }
    ArrAll(num,size);
}
void ArrAll(int num[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + num[i];
    }
    printf("sum = %d\n",sum);
}