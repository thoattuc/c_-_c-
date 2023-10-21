#include <conio.h>
#include <stdio.h>

int main() {
	int n, m, i, j;
	printf("Ve hinh chu nhat co m hang va n cot\n");
	printf("Nhap vao m, n: ");
	scanf("%d, %d", &m, &n);
	for(i=1; i<=m; i++) {
		for(j=n; j>=1; j--) {
		printf("*");
		}
		printf("\n");
	}
}
