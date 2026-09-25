// Write a function that takes an array and its size and returns the number of even elements.
#include<stdio.h>
void evenE(int num[],int n);
int main(){
     int size;
    printf("Enter size of array ");
    scanf("%d",&size);
    int num[size];
    for(int i=0;i<size;i++){
        printf("enter %dth number of array = ",i);
        scanf("%d",&num[i]);
    }
    evenE(num,size);
}
void evenE(int num[],int n){
    int p=0;
    for(int i=0;i<n;i++){
        if(num[i]%2==0){
            p++;
        }
    }printf("No of even elements = %d\n",p);
}