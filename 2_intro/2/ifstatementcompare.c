
/*similar to fig 2.13 using if statement,relational operators,equality soperators*/
#include<stdio.h>

/*func main begin execution*/
int main()
{

	/*first and second number to be read from user*/
	int num1 , num2;
	
	
	printf("please enter two numbers in integer\n");
	
        scanf("%d %d",&num1 ,& num2);/*read two integer */


	if(num1>num2)/*relational operator*/
   {
	   printf("%d is greater than %d", num1, num2);

   }/*end if */

	if(num1<num2)/*relational operator*/

   {
           printf("%d is smaller than %d", num1,num2);	   
   }/*end if */


	if(num1==num2)/*equality operator*/
   {
           printf("%d is equal to %d", num1,num2);
   }   /*end if*/

	
         return 0;/*indicate that program ended successfully*/


}/*end func main*/

