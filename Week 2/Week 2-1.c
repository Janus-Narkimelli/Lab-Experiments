#include<stdio.h>
/*sum and average using
  c program*/
  int main()
{ 
   int a,b,c,x;
   float avg;
   printf("\n Enter a,b and c values:");
   scanf("%d%d%d",&a,&b,&c);
   printf("\n a=%d,b=%d,c=%d",a,b,c);
   x=a+b+c;
   printf("\n The sum is:%d",x);
   avg=(float)x/3;
   printf("\n The average is:%.2f",avg);
    return 0;
}