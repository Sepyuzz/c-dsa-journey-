// Print all prime numbers between 1 and N.
#include <stdio.h>
int prime(int n){ 
    if(n<=1){
        return 0;
    } 
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        
    }return 1;

}
int main(){
    int n ;
    printf("Enter number n such that you want prime numbers between 1 to n = ");
    scanf("%d",&n);
    for(int j=2;j<=n;j++){
      if( prime(j))
     {  printf("%d\t",j);}
    }return 0;
}