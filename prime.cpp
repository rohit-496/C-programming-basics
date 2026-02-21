#include<stdio.h>
int main()
{
	int n, temp,i;
	if(n==1)
	{
		printf("not prime");
	}
	printf("enter a number:");
	scanf("%d", &n);
	for (i=1; i<=n; i=i+1)
	{
		if (n/i==0);
		temp++;
	}
	if (temp==2)
	{
		printf("prime");
		
	}
	else
	{
		printf("not prime");
	}
	return 0;
}
