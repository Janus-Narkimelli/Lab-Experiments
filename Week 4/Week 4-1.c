#include<stdio.h>
#include<math.h>
/*Evaluate the following expressions 
  using c program*/
  int main()
{ 
   int A,B,C,D,E,F,G,i;
   int res1,res2,res3,J;
   printf("\n Enter A,B,C,D,E,F,G,i values:");
   scanf("%d%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G,&i);
   res1=A+B*C+(D*E)+F*G;
   printf("\n Result of a is: %d",res1);
   res2=(A/B)*C-B+(A*D)/3;
   printf("\n Result of b is: %d",res2);
   res3=A++ +B- --A;
   printf("\n Result of c is: %d",res3);
   J=(i++)+(++i);
   printf("\n Result of d i.e,J=%d",J);
    return 0;
}