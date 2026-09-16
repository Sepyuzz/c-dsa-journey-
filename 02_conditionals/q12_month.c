//Given a month number, print the number of days in that month.
#include <stdio.h>
int main(){
    int m;
    printf("Enter a month as 1=January,2=February .... = ");
    scanf("%d",&m);
    printf("So, no of days = "); 
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
   { printf("31 days");}
         else if( m==4||m==6||m==9||m==11)
     {printf("30 days");}
         else if (m==2)
   {  printf("28 days"); 
     } else {
      printf("invalid month");   
        }
return 0;
}