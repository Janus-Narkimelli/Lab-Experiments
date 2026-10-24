#include<stdio.h>
/*Simple interest calculation 
  using c program*/
  int main()
{ 
   float P,T,R,SI;
   printf("\n Enter principal amount,time period and rate of interest:");
   scanf("%f%f%f",&P,&T,&R);
   SI=P*T*R/100;
   printf("\n The simple interest is %f",SI);
   
    return 0;
}