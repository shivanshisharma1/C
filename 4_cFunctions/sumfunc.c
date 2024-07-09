#include<stdio.h>

int sum(int x , int y )
{
    return x + y ;
}

int main()
{
	int a , b;
	printf("enter the first digit  ");
	scanf("%d", &a);

	printf("enter the second digit ");
	scanf("%d", &b );

    int s = sum( a , b );
	printf("the sum is %d \n ", s);
	return 0;
}
        

