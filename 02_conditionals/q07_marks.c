//Given marks in 5 subjects, calculate the percentage and assign a grade.
#include <stdio.h>
int main(){
    int phy,maths,chem,eng,cs;
    printf("Enter marks of phy= ");
    scanf("%d",&phy);
    printf("Enter marks of maths =");
    scanf("%d",&maths);
    printf("Enter marks of chem =");
    scanf("%d",&chem);
    printf("Enter marks of eng =");
    scanf("%d",&eng);
    printf("Enter marks of cs =");
    scanf("%d",&cs);
    float perc=(phy+maths+chem+eng+cs)/5;
    printf("percentage = %f\n",perc);
    if(perc>90 && perc<=100){
        printf("A+ grade");
    }else if(perc>80 && perc<=90){
        printf("A grade");
    }else if(perc>70 && perc<=80){
        printf("B grade");
    }else if(perc>50 && perc<=70){
        printf("C grade");
    }else if(perc>30 && perc<=50){
        printf("D grade");
    } else{ 
        printf("F grade");
    }
    return 0;
} 