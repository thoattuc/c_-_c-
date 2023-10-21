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
	while(n<=100);
	int n_reverse = 0;
	while(n != 0)
	{
		int surplus = n%10;
		n_reverse = n_reverse * 10 + surplus;
		n = n/10;
	}
	printf("reverse of number: %d", n_reverse);
}
