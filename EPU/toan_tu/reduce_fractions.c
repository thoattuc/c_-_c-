#include<conio.h>
#include<stdio.h>

int main()
{
	int a, b, i;
	printf("Rut gon phan so a/b :\n");
	do
	{
	printf("Input a, b: ");
	scanf("%d%d", &a, &b);
	break;
	}
	while(a!=0 || b!=0);
	
	int UCLN;
	for (i=a; i>=1; i--)
	{
		if(a%i == 0 && b%i == 0)
		{
			UCLN = i;
			break;
		}
	}
	a = a/UCLN;
	b = b/UCLN;
	printf("Phan so sau rut gon: %d/%d", a, b);
}
