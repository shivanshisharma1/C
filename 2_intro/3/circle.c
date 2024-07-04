
/*question 2.20 program to teach use of double*/
#include <stdio.h>


/*function main begins execution*/
   int main()



{


        int radius;/* radius to be input by the user*/

	printf("enter the radius of your circle\n");/* print*/

	scanf("%d",&radius);/*read a radius*/

	double pi= 3.14;/* here double is used as pi is a decimal*/



{ 

	
    double diameter= 2.0 * radius;
    printf(" the diameter of your circle is %f\n", diameter);/*here %f indicates that value expected would be decimal*/



{ 


	double circumfrence= 0;

	circumfrence = pi*diameter;/* assign result to circumfrence*/

	printf("the circumfrence of your circle is %f\n", circumfrence);/* print in double*/



}


{
 


	double area =0; 

	area = pi * radius * radius ;/* assign reult to area*/

	printf("the area of a circle is %f\n",area);



}
        return 0;/* indicate that the program has ended successfuly*/



}
}
