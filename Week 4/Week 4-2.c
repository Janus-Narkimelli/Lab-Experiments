#include<stdio.h>

/*Find the maximum of 3 numbers
  using conditional operator*/
  int main()
{ 
   int a,b,c;
   printf("\n Enter a,b and c values:");
   scanf("%d%d%d",&a,&b,&c);
   (a>b && a>c)?printf("\n%d is big",a):((b>c)?printf("\n%d is big",b):printf("\n%d is big",c));
    return 0;
}