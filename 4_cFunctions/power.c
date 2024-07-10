#include<stdio.h>
int power(int a ,int b);

int main(){
    int a , b;
    int res = 0;
    printf("enter the base number :\n");
    scanf("%d", &a);
    printf("enter the exponent :\n");
    scanf("%d", &b);

    res = power(a,b);
    printf(" the result is : %d\n", res);
    return 0;
}

    int power(int a , int b)
    {
    int product = 1;
    if( b == 0 )
      {
          product = 1;
      }else {
          for(; b >= 1 ; b--)
          {product = product * a;
          }
      }
          return product;
      }
      
