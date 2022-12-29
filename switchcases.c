#include <stdio.h>
int main()
{
   char opperator;
   int num1,num2,result;
   printf("enter the opperator +|-|*|/|% /n ");
   scanf("%c",&opperator);
   printf("enter num1 :");
   scanf("%d",&num1);
   printf("enter num2 :");
   scanf("%d",&num2);


   switch (opperator)
   {
      case '+':
      result = num1 + num2 ;
      break;
      case '-':
      result = num1 - num2 ;
      break;
      case '*':
      result = num1 * num2 ;
      break;
      case '/':
      result = num1 / num2 ;
      break;
   }
   printf("result = %d",result);

}