#include<stdio.h>

   int main()

{
	int a;
	printf("enter the 1st digit\n");
	scanf("%d", &a);

        int b;
	printf("enter the second digit\n");
	scanf("%d", &b);

   {  
	int xyz=0;
	xyz= a % b ;

	if (xyz==0)
{
	printf("then %d is a multiple of %d\n", a,b); 
}
	if (xyz!=0)
		
{
	printf("then %d is not a multiple of%d\n", a,b);
}
     }
    return 0;
}
