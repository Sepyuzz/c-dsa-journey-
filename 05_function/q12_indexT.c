// Write a function that takes an array, its size, and a target value. Return the index of the target if found, otherwise return -1
#include<stdio.h>
void indexT(int num[],int size,int target);
int main(){
    int size;
    printf("Enter size of array ");
    scanf("%d",&size);
    int num[size];
    for(int i=0;i<size;i++){
        printf("enter %dth number of array = ",i);
        scanf("%d",&num[i]);
    } 
    int target;
    printf("enter your targeted number = ");
    scanf("%d",&target);
    indexT(num,size,target);
    return 0;
}
void indexT(int num[],int n,int target){
    int i,p=1;
for(  i=0;i<n;i++){
    if(num[i]==target){
        p=0;
        break;
    } 
    }
    if(p==0){
        printf("index = %d\n",i);
    }else{
        printf("index = %d\n",-1);
    }
}
