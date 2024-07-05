#include <stdio.h>

int main()
{
       int counter = 1;
       int grade;
       int total = 0;
       int average;
       
       while(counter <= 10 ) {
           printf(" enter grade : ");
	   scanf( "%d", &grade );
	   total = total + grade;
	   counter = counter + 1;
	} 

        average = total / 10;
	printf("Class average is %d\n", average);
	
	return 0;
}

               
