#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int a;
	printf("Input one interger number a:\n");
	scanf("%d", &a);
	int b = (int)sqrt(a);
	if(b*b == a){
		printf("%d is direction number", a);
	}
	else{
		printf("%d is not direction number", a);
	}
}
