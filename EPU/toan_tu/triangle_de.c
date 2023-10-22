#include <conio.h>
#include <stdio.h>

int main()
{
	int n, i, j;
	printf ("Ve tam giac nguoc \n");
	printf ("Nhap so nguyen n = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		for(j=1; j <= n-i+1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
