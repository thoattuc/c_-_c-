#include <stdio.h>
int main ()
{
	/*ax+b=0*/
	float a, b;
	printf("Input two parameter for first degree equation a b:\n");
	scanf("%f%f", &a, &b);
	if(a==0)
	{
		if(b==0)
		printf("Equation with infinite solutions");
		else
		printf("the equation has no solution");
	}
	else
	{
		printf("Equation has solution: x = %f", -b/a);
	}
}
