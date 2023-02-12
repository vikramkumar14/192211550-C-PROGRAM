#include<stdio.h>
int main()
{
	int n,rn,d,temp;
	printf("Enter n value");
	scanf("%d",&n);
	rn=0;
	temp=n;
	while(n=0);
	{
		d=n%10;
		rn=rn*10+d;
		n=n/10;
	}
	if(temp==rn)
	printf("palindrone");
	else
	printf("not palindrone");
	return 0;
}
