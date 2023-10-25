#include <conio.h>
#include <stdio.h>

int main ()
{
	int i, j, n;
	do
	{
		printf("Input n =");
		scanf("%d", &n);
	}
	while(n<=1);
	//True => {do}; false => {for}
	int count;
	for(i=1; i<=n; i++) {
		count = 0;
		for(j=2; j<=i; j++){
			if(i%j!=0){
				count++;
			}
		}	
	}
	if(count != 0){
		printf("prime number quantity : %5d", count);
	} else {
		printf("prime number quantity: %5d", i);
	}
}
