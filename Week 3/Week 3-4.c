#include<stdio.h>
#include<math.h>
/*Find distance travelled by an 
  object using c program*/
  int main()
{ 
   float s,t,d;
   printf("\n Enter the speed in m/s and time in sec:");
   scanf("%f%f",&s,&t);
   d=s*t;
   printf("\n The distance travelled is %.2f metres",d);
   
    return 0;
}