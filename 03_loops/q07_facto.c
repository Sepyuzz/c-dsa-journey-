// Calculate N!.
#include <stdio.h>
int main (){
    int n,p=1;
    printf("Enter n = ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        p=p*i;
    }
printf("so factorial of %d is %d",n,p);
return 0;
}