#include <stdio.h>

int greatest_of_three_numbers (int a, int b, int c)
{
	if( a > b ) {
		if(  a > c ) {
		return a;
	} else {
	      return c;
           }
	}
	
        if( b > c ) { 
		return b;
        } else { 
		return c;
	}
	return 0;
}	

int main(void)
{
	int a, b, c;
	int result;
	printf(" please enter three digits ");
	scanf("%d %d %d", &a,&b,&c);
	result = greatest_of_three_numbers(a,b,c);
	printf("Greatest  of 3 numbers is : %d", result);

}
