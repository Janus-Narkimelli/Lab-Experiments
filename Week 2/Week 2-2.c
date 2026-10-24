#include<stdio.h>
/*conversion from fahrenheit to
  celsius and vice versa*/
  int main()
{ 
   float f,c;
   
   //fahrenheit to celsius//
   printf("\n Enter the temperature in fahrenheit:");
   scanf("%f",&f);
   c=(f-32)*5/9;
   printf("\n The temperature in celsius is:%.2f",c);
   
   //celsius to fahrenheit//
   printf("\n Enter the temperature in celsius:");
   scanf("%f",&c);
   f=(c*5/9)+32;
   printf("\n The temperature in fahrenheit is:%.2f",f);
   
    return 0;
}