#include <stdio.h>
#include <conio.h>

int main()
{
	int i, n;
	do
	{
		printf("Input n= ");
		scanf("%d", &n);
	}
	while(n<=0);
	for(i=1; i<=n*n; i++)
	{
		printf("%d", i);
		if(i%n == 0)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
	return 0;
}	
