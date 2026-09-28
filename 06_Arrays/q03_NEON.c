// Write a program to count how many even and odd numbers are present in an array of size $N$. 
#include <stdio.h>
int main (){
    int n;
    printf("Enter size of array = ");
    scanf("%d",&n);
    int num[n],e=0,o=0;
    for(int i=0;i<n;i++){
        printf("Enter %dth term of array = ",i);
        scanf("%d",&num[i]);
        if (num[i]%2==0){
            e++;
        }else{
            o++;
        }
    } printf("number of even numbers = %d \n",e);
    printf("number of odd numbers = %d \n",o);
    return 0;
}
