#include<stdio.h>
#include<math.h>
/*Find the compound interest 
  using c program*/
  int main()
{ 
   float P,T,R,A,CI;
   printf("\n Enter principal amount,time period and rate of interest:");
   scanf("%f%f%f",&P,&T,&R);
   A=P*pow((1+R/100),T);
   CI=A-P;
   printf("\n The compound interest is %.2f",CI);
    return 0;
}