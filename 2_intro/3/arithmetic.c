/* similar to fig 2.5 ,arithmatic operators*/
#include <stdio.h>


/*function main begis program execution*/
int main()
{


	int digit1, digit2 ;/* first and second number to be input by the user*/

	printf("enter first digit");/*print*/

	scanf("%d", &digit1);/*read an integer*/

	printf("enter second digit");
	scanf("%d", &digit2);

{


	int sum=0;/*variable in which sum would be stored*/

	sum= digit1 + digit2;/*assign total to sum*/

	printf("sum is %d\n", sum);/* print result*/


}

{


        int difference = 0;/*variable in which difference  would be stored*/

	difference = digit1 - digit2;/*assign result to difference */

	printf("difference is %d\n", difference);



}


        int product= 0;/*variable in which product would be stored*/

	product = digit1* digit2;/*assign result to produvct */


	printf("product is %d\n", product);/* print result*/



{


	int quotient = 0;/*variable in which quotient would be stored*/

        quotient= digit1/digit2 ;/*assign result to quotient */

        printf("the quotient is %d\n", quotient);/* print result*/



}
        return 0;/* indicate that program ended successfuly*/

	
}/*end function main*/






