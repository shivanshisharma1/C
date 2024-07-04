

/* qestion 2.20 identify even and odd integers */ 
#include <stdio.h>


/*function main begins program execution*/
  int main()

{


	int digit;
	printf(" enter any integer you wish ");
	scanf("%d", &digit);

        
	int xyz = 0;
	xyz = digit % 2;


	if (xyz==0)

{  
	printf("%d the number entered is even\n", digit);
}

       if(xyz!=0)
{
       printf("%d the number entered is odd\n",digit);
}

      return 0;
 }
