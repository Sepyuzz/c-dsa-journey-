// Given an array, reverse digit of each elements in-place (without using a second array) and print the updated array.
#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array = ");
    scanf("%d",&n);
    int num[n],m=0;
    for(int i=0;i<n;i++){
        printf("Enter %dth term of array = ",i);
        scanf("%d",&num[i]);
        for(int j;num[i]!=0;j++){
            int p=num[i]%10;
            m=m*10+p;
            num[i]=num[i]/10;
        }num[i]=m;
        m=0;
    }for (int i=0;i<n;i++ ){
        printf("%dth term = %d\n",i,num[i]);
    }
    return 0;
}