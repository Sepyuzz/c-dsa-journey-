// Write a function that takes an array and its size and returns the largest element.
#include <stdio.h>
void large(int num[],int n);
int main(){
    int p;
    printf("Enter size of array = ");
    scanf("%d",&p);
    int num[p];
    for(int i=0;i<p;i++){
        printf("enter %dth number of array = ",i );
        scanf("%d",&num[i]);
        
    }
    large(num ,p);
return 0;
}
void large(int num[ ],int n){
    int max=num[0];
    for(int i=1;i<n;i++){
        if(max<num[i]){
            max=num[i];
        }
    }
    printf("So the lagest value in array will be %d \n",max);
}