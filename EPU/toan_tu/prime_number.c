#include <conio.h>
#include <stdio.h>
int main ()
{
	int n;
	do
	{
		printf("Input n = ");
		scanf("%d", &n);
	}
	while(n<=0);
	int count = 0;
	int i;
	for (i=2; i<n; i++)
	{
		if (n%i == 0)
		{
			count ++;
		}
	}
	if (count == 0)
	{
		printf("%d is prime number!", n);
	}
	else
	{
		printf("%d is't prime number", n);
	}
}
