#include<conio.h>
#include<stdio.h>
#include<math.h>

int main ()
{
	float a, b, c, P, S;
	printf("Kiem tra a, b, c xem co phai la tam giac ?\n");
	printf("Nhap 3 so a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && c+b>a)
	{
		printf("Thoa man tam giac!\n");
		P = (a+b+c)/2;
		S = sqrt(P*(P-a)*(P-b)*(P-c));
		printf("Dien tich: %f", S);
	}
	else
	{
		printf("Khong thoa man la tam giac!");
	}
}
