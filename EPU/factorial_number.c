#include <stdio.h>
#include <conio.h>

int main ()
{
	int n, factorial;
	do
	{
		printf("Input n = ");
		scanf("%d", &n);
	}
	while (n<=0);
	factorial = 1;
	int i;
	if(n%2==0){
		for(i = 2; i<=n; i=i+2){
			factorial *= i;
		}
	} else {
		for(i = 1; i<=n; i=i+2){
			factorial *= i;
	}
	printf("%d!! = %d", n, factorial);
}
}
