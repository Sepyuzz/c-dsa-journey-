// Given an array, reverse its elements in-place (without using a second array) and print the updated array
#include <stdio.h>
int main (){
    int n;
    printf("Enter size of array = ");
    scanf("%d",&n);
    int num[n] ;
    for(int i=0;i<n;i++){
        printf("Enter %dth term of array = ",i);
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n/2;i++ ){
        num[i]+=num[n-1-i];
        num[n-i-1]=num[i]-num[n-i-1];
        num[i]=num[i]-num[n-i-1];
    }
    for(int i=0;i<n;i++){
        printf(" %dth term of array = %d\n",i,num[i]);
    }
return 0;
}