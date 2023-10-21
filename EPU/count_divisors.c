#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,count=0;
	
	do
	{
		printf("Input n\n");
		scanf("%d", &n);
	}
	while(n<=0);
	
	for(i=1; i<=n; i++)
	{
		if(n%i==0){
			count += 1;
		}
	}
	
	printf("So luong uoc cua %d la %d", &n, &count);
}
