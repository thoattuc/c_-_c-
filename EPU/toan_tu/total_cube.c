#include <stdio.h>
#include <conio.h>

int main ()
{
	int n;
	do
	{
		printf("Input n = ");
		scanf("%d", &n);
	}
	while (n<=99 || n>=1000);
	int sum = 0;
	while(n != 0)
	{
		int a = n%10;
		n = n/10;
		sum += a*a*a;
	}
	printf("sum cube: %d", sum);
}
