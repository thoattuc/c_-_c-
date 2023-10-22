#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	printf("Bai toan: tinh trung binh cong cac so chan tu 0 - n\n");
	int n, i, sum, count;
	printf("Input n: ");
	scanf("%d", &n);
	sum = 0;
	count = 0;
	for(i = 2; i <= n; i = i+2)
	{
		sum += i;
		count ++;
	}
	if(count > 0)
	{
		float average = sum / count;
		printf("Trung binh cong cac so chan tu 0 - n: %f", average );
	}
	else
	{
		printf("khong co so chan");
	}
}
