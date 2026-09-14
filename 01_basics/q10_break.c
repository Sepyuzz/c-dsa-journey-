//Take an amount in rupees and break it into the minimum number of notes using denominations:
//₹500, ₹200, ₹100, ₹50, ₹20, ₹10, ₹5, ₹1
#include <stdio.h>
int main(){
    int p;
    printf("enter an amountn= ");
    scanf("%d",&p);
    int l=p/500,m=(p-l*500)/200,n=(p-l*500-m*200)/100,
    o=(p-l*500-m*200-n*100)/50,q=(p-l*500-m*200-n*100-o*50)/20,
    r=(p-l*500-m*200-n*100-o*50-q*20)/10,
    s=(p-l*500-m*200-n*100-o*50-q*20-r*10)/5,
    t=(p-l*500-m*200-n*100-o*50-q*20-r*10-s*5);
     
    printf("so minimum no. of notes required = %d",
        l+m+n+o+q+r+s+t);
    return 0;
}