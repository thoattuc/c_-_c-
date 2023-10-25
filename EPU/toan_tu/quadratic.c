#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float a, b, c, x, x1, x2;
	printf("Tim nghiem P tr bac 2 ax2+bx+c=0 :\n");
	printf("Nhap vao cac he so a, b, c cua p tr: \n");
	scanf("%f%f%f", &a, &b, &c);
	if(a == 0)
	{
		if(b == 0)
		{
			if(c == 0)
			{
				printf("P tr co vo so nghiem");
			}
			else
			{
				printf("P tr vo nghiem");
			}
		}
		else
		{
			x = -c/b;
			printf("P tr co nghiem duy nhat x = %f", x);
		}
	}
	else
	{
		float delta = b*b - 4*a*c;
		if(delta<0)
		{
			printf("P tr vo nghiem");
		}
		if(delta = 0)
		{
			x=-b/2*a;
			printf("P tr co nghiem duy nhat x = %f", x);
		}
		else
		{
			x1 = (-b - sqrt(delta))/2*a;
			x2 = (-b + sqrt(delta))/2*a;
			printf("P tr co hai nghiem la:\n x1 = %f\n x2 = %f", x1, x2);
		}
	}
}
