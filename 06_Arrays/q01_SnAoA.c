// Write a program to read N integers into an array, find their sum and average, and print the result.
#include<stdio.h>
int main(){ 
    int n;
    printf("Enter size of array = ");
    scanf("%d",&n);
    int num[n],sum=0;
    for(int i=0;i<n;i++){
        printf("Enter %dth term of array",i);
        scanf("%d",&num[i]);
        sum+=num[i];
    }printf("sum of array = %d\n",sum);
    printf("Average of array = %f\n",(float)sum/n);
    return 0;
}