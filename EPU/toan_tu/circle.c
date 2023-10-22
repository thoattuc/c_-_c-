#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float x1, y1, R1, x2, y2, R2, D;
	printf("Input circle-1 x1, y1, R1: ");
	scanf("%f, %f, %f", &x1, &y1, &R1);
	printf("Input circle-2 x2, y2, R2: ");
	scanf("%f, %f, %f", &x2, &y2, &R2);
	
	D = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
	if(D == R1+R2 || D == fabs(R1-R2))
	{
		printf("2 duong tron tiep xuc nhau.");
	}
	else
	{
		printf("2 duong tron khong tiep xuc nhau.");
	}
	return 0;
}
