#include <conio.h>
#include <stdio.h>

int main() {
	int n, i, j;
	printf("Ve tam giac voi n hang\n");
	printf("Nhap vao n = ");
	scanf("%d",&n);
	for(i=0; i<=n; i++) {
		for(j=0; j<=i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
