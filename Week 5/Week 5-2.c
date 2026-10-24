#include<stdio.h>

/*Calculate a household electricity 
  bill using c program*/
  int main()
{  
    int units;
    float amt,tot_amt;
    printf("\n Enter the number of units consumed:");
    scanf("%d",&units);
    if (units<=100)
    {   amt=1.50;
        tot_amt=amt*units;
        printf("\n The total bill amount is %.2f",tot_amt);  }
    else if (units>=101 && units<=200)
    {   amt=2.50;
        tot_amt=amt*units;
        printf("\n The total bill amount is %.2f",tot_amt);  }
    else if (units>=201 && units<=500)
    {   amt=4.00;
        tot_amt=amt*units;
        printf("\n The total bill amount is %.2f",tot_amt);  }
    else 
    {   amt=6.00;
        tot_amt=amt*units;
        printf("\n The total bill amount is %.2f",tot_amt);  }
    return 0;
}