#include <stdio.h>
#include <conio.h>

int main ()
{
    int A[100], i, n;
    printf("Input n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Input A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    printf("\nOutput A[i] = ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nRevert A[i] = ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", A[i]);
    }
}
