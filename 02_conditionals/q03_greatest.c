//Find the greatest of three numbers.
#include<stdio.h>
int main (){
    int x,y,z;
    printf("enter x = ");
    scanf("%d",&x);
    printf("enter y = ");
    scanf("%d",&y);
    printf("enter z = ");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("x is greatest");
    }else if(y>x && y>z){
         printf("y is greatest");
    }else if (x==y && x==z){
         printf("All 3 are equal");
    }else{
         printf("z is greatest");
    }
    return 0;
}