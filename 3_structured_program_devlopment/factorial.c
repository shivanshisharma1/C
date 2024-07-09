
#include<stdio.h>

int main()
{
	int num;
	int factorial= 1;
	printf(" please enter the digit\n");
	scanf("%d", &num);
        
	if(num < 0)
      printf("factorail is not defined\n ");
      else{
      for( num ; num > 0 ; num-- )
     
        factorial = factorial * num ;
	printf(" the factorial of the digit is %d\n", factorial); 
     }
    return 0;
  
}
