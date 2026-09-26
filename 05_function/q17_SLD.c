// Write a function that takes an integer n and returns the second-largest distinct digit present in n. If it doesn't exist, decide on an appropriate return value.
#include<stdio.h>
void sld(int n);//sld=second largest distinct digit
int main(){
    int num;
    printf("Enter Your Number = ");
    scanf("%d",&num);
    sld(num);
    return 0;
}
void sld(int n) {
    int p,m=0,z=n;
    for(int i=1;z!=0;i++){
        p=z%10;
        if(m<p){
            m=p;
        }
        z=z/10;
    } 
    int t=-1;
    for(int i=1;n!=0;i++){
        p=n%10;
        if(p!=m && t<p){
            t=p;
        }
        n=n/10;
    } 
    if(t!=-1){
        printf("So the second largest digit = %d\n",t);
    }else{
        printf("No Second largest digit present \n");
    }
    
}