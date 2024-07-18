/*fig. 2.13: fig 02_13.c
usung if statement ,relation operators ,and equality operator*/

#include <stdio.h>

/*function main begin  program for exection */

int main()

{
       int num1;  /* first number to read from user */
       int num2;  /* second number to read from user*/

       printf("enter the integer and i will tell you\n");
       printf(" the relation they satisfy: ");

       scanf("%d %d", &num1, &num2);/*read two integers*/

       if(num1==num2)
  {
        printf("%d is eequal to %d", num1,num2);

  }  /*end if*/

       if(num1!=num2)
{
       printf("%d is not equal to %d" , num1,num2);
}  /* end if*/
       return 0;
}

