#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	printf("Kiem tra 2 canh cua hinh vuong\n");
	float a, b, CV, S;
	printf("nhap 2 so a,b: ");
	scanf("%f%f", &a, &b);
	if(a>0 && b>0 && a==b)
	{
		printf("Thoa man do dai 2 canh hinh vuong!\n");
		CV = 4*a;
		S = a*a;
		printf("Chu vi: %f\nDien tich: %f", CV, S);
	}
	else
	{
		printf("Khong thoa man la hinh vuong!");
	}
}
