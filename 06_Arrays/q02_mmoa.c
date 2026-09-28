// Given an array, find the maximum and minimum elements along with their respective zero-based index positions.
#include <stdio.h>
int main (){
    int n;
    printf("Enter size of array = ");
    scanf("%d",&n);
    int num[n],m=0,p=999999999;
    for(int i=0;i<n;i++){
        printf("Enter %dth term of array = ",i);
        scanf("%d",&num[i]); 
        if(m<num[i]){
            m=num[i];
        }   
        if(p>num[i]){
            p=num[i];
        }
    }
    printf("so maximum value = %d\n",m);
    printf("so minimum value = %d\n",p);
    return 0;
}