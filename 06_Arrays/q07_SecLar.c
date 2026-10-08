// Write a program to find the second largest element in an array without sorting it.
#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array = ");
    scanf("%d",&n);
    int num[n],p=0;
    for(int i =0;i<n;i++){
        printf("Enter %dth element of array = ",i+1);
        scanf("%d",&num[i]);
        if(p<num[i]){
            p=num[i];
        }
    } int t=0;
    for(int i =0;i<n;i++){
        if(num[i]<p){
            if(t<num[i]){
            t=num[i];
        }
        }
    }printf("So, the second largest number of array = %d",t);
    return 0;
}