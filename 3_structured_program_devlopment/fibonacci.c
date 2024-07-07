#include <stdio.h>

void the_fibonacciseries_for_n_terms(int n)
{ 
      int a, b, c;
      a = 0;
      b = 1;
      printf("0 ");
      printf("1 ");
	
      for( int counter = 1 ; counter <= n-2 ; counter++ ){
      
      c = a + b;
      printf("%d ", c);
      a = b;
      b = c;
   }
}

int main(void)
{
   int counter;
   printf("please enter the number of terms ");
   scanf("%d", &counter);
   the_fibonacciseries_for_n_terms(counter);
   printf("\n");
}

