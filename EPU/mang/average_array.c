#include <stdio.h>
#include <conio.h>

int main()
{
    float A[100];
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%5f", &A[i]);
    }
    printf("A[%d] =", &n);
    for (i = 0; i < n; i++)
    {
        printf("%f", A[i]);
    }
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
    printf("\nAverage Array = %f", sum / n);
}
