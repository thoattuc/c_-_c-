 #include <stdio.h>
 #include <conio.h>
 
 /*fn = fn-1 + fn-2*/
 
 int main ()
 {
 	int i, n;
 	do
 	{
 		printf("Input n = ");
		scanf("%d", &n);	
	}
	while(n<=0);
	int a = 1, b = 2;
	for(i = 1; i<=n; i++)
	{
		if(i == 1 || i == 2)
		{
			printf("%d", i);
		}
		else
		{
			int c = a + b;
			printf("%d", c);
			a = b;
			b = c;
		}
	}
 }
