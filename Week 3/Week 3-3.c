#include<stdio.h>
#include<math.h>
/*Find the area of a triangle 
  using heron's formulae*/
  int main()
{ 
   float a,b,c,s,area;
   printf("\n Enter three sides a,b and c:");
   scanf("%f%f%f",&a,&b,&c);
   s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   printf("\n The area of the given triangle is %.2f",area);
    return 0;
}