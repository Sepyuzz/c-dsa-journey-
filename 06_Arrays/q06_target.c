// Search for a target integer $X$ in an array using Linear Search. Print its first occurrence index, or -1 if $X$ is not found.
#include <stdio.h>
int main (){
    int n;
    printf("Enter size of array = ");
    scanf("%d",&n);
    int num[n],tar;
    printf("Enter targeted number = ");
    scanf("%d",&tar);
    for(int i=0;i<n;i++){
        printf("Enter %dth term of array = ",i);
        scanf("%d",&num[i]);
        
    }int i,p=1;
     for(i=0;i<n;i++){
        if(num[i]==tar){
            p=1;
            break;
        }else{
            p=0;
        }
     }
     if(p==1){
        printf("index of targeted number = %d",i);
     }else{
        printf("targeted no. not found -1");
     }
     return 0;
}