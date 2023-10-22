#include <stdio.h>
#include <conio.h>

int main ()
{
	int i, n, sum;
	printf("Input n = ");
	scanf("%d", &n);
	sum = 0;
	for(i=1; i<n; i++)
	{
		if(n%i == 0){
			sum = sum+i;
		}
	}
	if(sum <= n){
		printf("%d is perfect number", n);
	}else{
		printf("%d isn't perfect number", n);
	}
}
