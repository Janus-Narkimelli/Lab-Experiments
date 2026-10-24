#include<stdio.h>

/*Find the max and min of four
 numbers using if-else*/
  int main()
{ 
    int n1,n2,n3,n4;
    int max1,max2,min1,min2;
    printf("\n Enter the n1,n2,n3,n4 values:");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    if(n1>n2)
     {  max1=n1;
       min1=n2;  }
    else
     {  max1=n2;
        min1=n1; }
    if(n3>n4)  
     {  max2=n3;
        min2=n4; }
    else
     {  max2=n4;
        min2=n3; }
    (max1>max2)? printf("\nmax number is:%d",max1):printf("\nmax number is:%d",max2);  
    (min1<min2)? printf("\nmin number is:%d",min1):printf("\nmin number is:%d",min2);
    return 0;
}