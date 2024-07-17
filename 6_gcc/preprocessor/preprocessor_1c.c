 #include <stdio.h>

  #define SQUARE(x) (x * x)
  #ifdef SQUARE_FORMULA
      #define FORMULA(x) SQUARE(x)
  #else
      #define FORMULA(x) (2 * x)
  #endif

  int main() {
      int num = 5;
      printf("Number: %d\n", num);
      printf("Result: %d\n", FORMULA(num));
      return 0;
 }
