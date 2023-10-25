#include <stdio.h>
#include <conio.h>

int main()
{
	int i, a, b, UCLN, BCNN;
	do
	{
		printf("Input a, b = ");
		scanf("%d, %d", &a, &b);
	}
	while(a<=0 || b<=0);
	for(i=a; i>=1; i--)
	{
		if(a%i==0 && b%i==0)
		{
			UCLN = i;
			break;
		}
	}
	BCNN = (a*b)/UCLN;
	printf("UCLN: %d\nBCNN: %d", UCLN, BCNN);
}
