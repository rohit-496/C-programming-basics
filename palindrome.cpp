#include<stdio.h>
int palin(int n)
{
	int rev = 0,rem,num;
	num=n;

	while (n!=0)
	{
	rem = n%10;
	rev = rev*10+rem ;
	n = n/10;
}

if (num == rev)
{
	printf(" ho ho palindrome ho");
}
else
{
	printf("vakk sala baulais kyo");
}
return 0;
}
int main()
{
	int n;
	printf("number hann khatey");
	scanf("%d", &n);
	palin(n);
	return 0;
}


