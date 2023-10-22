#include <conio.h>
#include <stdio.h>

int main() {
	printf("Tinh giai thua cua n\n");
	int n, factorial, i;
	//su dung do-while kiem tra n>0:
	do
	{
		printf("Input n = ");
		scanf("%d", &n);
	}
	while(n<=0);
	
	factorial = 1;
	for(i=1; i<=n; i++)
	{
		factorial *= i;
	}
	printf("%d! = %d", n, factorial);
}
