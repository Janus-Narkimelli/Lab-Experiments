#include<stdio.h>
#include<math.h>
/*Find the roots of a quadratic 
  equation using c program*/
  int main()
{  
    float a,b,c;
    float disc,root1,root2;
    float real,imaginary,i;
    printf("\n Enter the coefficients a,b and c:");
    scanf("%f%f%f",&a,&b,&c);
    /* The standard quadratic equation 
        is a*pow(x,2)+b*x+c  */
    // Now find the discriminant
    disc= b*b-4*a*c;
    if (disc>0)   
    {   root1= (-b+sqrt(disc))/(2*a);
        root2= (-b-sqrt(disc))/(2*a);
        printf("\n The roots are %.2f and %.2f",root1, root2);  }
    else if (disc==0)   
    {   root1=root2= -b/(2*a);
        printf("\n The roots are %.2f and %.2f",root1, root2);  } 
    else if (disc<0)  
    {   real= -b/(2*a);
        imaginary= (sqrt(-disc))/(2*a);
        printf("\n The roots are %.2f+%.2fi and %.2f-%.2fi",real,imaginary,real,imaginary);  }     
        
    return 0;
}