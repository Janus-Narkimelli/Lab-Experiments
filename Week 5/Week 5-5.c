#include<stdio.h>

/*Check whether the given year is 
  leap year or not*/
  int main()
{   
    int year;
    printf("\n Enter the year:");
    scanf("%d",&year);
    if(year%400==0 || (year%4==0 && year%100!=0))
       printf("\n %d is a leap year",year);
    else
       printf("\n %d is not a leap year",year);    
    return 0;
}