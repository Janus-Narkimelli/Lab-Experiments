#include<stdio.h>
#include<math.h>
/*Find the square root 
  of a given number*/
  int main()
{ 
   float num,result;
   printf("\n Enter a number:");
   scanf("%f",&num);
   result=sqrt(num);
   printf("\n The square root of %.2f is %.2f",num,result);
    return 0;
}