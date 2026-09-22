// Write a function that takes an integer and returns its reverse.
#include <stdio.h>
void reverse(int x); 
int main(){
    int x;
    printf("enter number = ");
    scanf("%d",&x);
    reverse(x);
return 0;
}
void reverse(int n){
    int p,m=0;
     for (int i=1;n!=0;i++){
        p=n%10;
        m=p+10*m;
        n=n/10;
     }printf("so reverse of number will be %d\n",m);
}