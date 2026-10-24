#include<stdio.h>

/*Find the total and average 
  of 5 subject marks*/
  int main()
{ 
    int s1,s2,s3,s4,s5,tot;
    float avg;
    printf("\n The subject marks s1,s2,s3,s4,s5:");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    tot=s1+s2+s3+s4+s5;
    printf("\n The total marks are %d",tot);
    avg=(float)tot/5;
    printf("\n The average of all marks is %.2f",avg);
    return 0;
}