#include<stdio.h>

int main(void)
{
    int num ;
    int original = 0 ;
    int reverse = 0;
    int digit = 0 ;
    printf(" please enter a number\n ");
    scanf("%d", &num);
    
    original = num;

    for (; num != 0; num /= 10) {
        digit = num % 10; // Extract the last digit
        reverse = reverse * 10 + digit; // Build the reversed number
    } 
   
     if( reverse == original ){
     printf( " the number is palindrom\n ");
     }else
     { printf( "the number is not palindrom\n ");
     }
     return 0;
}
