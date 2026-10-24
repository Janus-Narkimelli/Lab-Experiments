#include<stdio.h>
#include<math.h>
/*Calculate different arthimetic 
  operations using c program*/
  int main()
{   
    int choice;
    float num1,num2,result;
    printf("\n Enter any two numbers:");
    scanf("%f%f",&num1,&num2);
    printf("\n Calculator menu:");
    printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division");
    printf("\n Enter your choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
             result=num1+num2;
             printf("\n The addition result is %.2f",result);
             break;
        case 2:
             result=num1-num2;
             printf("\n The subtraction result is %.2f",result);
             break;  
        case 3:
             result=num1*num2;
             printf("\n The multiplication result is %.2f",result);
             break;     
        case 4:
             if (num2!=0)
          {    result=num1/num2;
               printf("\n The division result is %.2f",result);
               break;         }
             else 
                printf("\n Division by zero is not possible");  
        default:
             printf("\n Invalid option");
             break;
             
    }
        
    return 0;
}