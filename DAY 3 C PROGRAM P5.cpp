#include<stdio.h>
int main()
{
	int number,i;
	long int factorial_result=1;
	printf("Enter a number: ");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		factorial_result=factorial_result*i;

	}
	printf("Factorial of %d",number,factorial_result);
	return 0;
}
