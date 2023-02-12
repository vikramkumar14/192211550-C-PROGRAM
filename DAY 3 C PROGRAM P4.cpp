#include<stdio.h>
int main()
{
	int n,rn,d;
	printf("Enter the value of n");
	scanf("%d",&n);
	rn=0;

	while(n)
	{
		d=n%10;
		rn=rn*10+d;
		n=n/10;
		}	
	printf("reverse no =%d",rn);

	return 0;
}
	
