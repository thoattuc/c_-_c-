#include <stdio.h>
#include <conio.h>

int main()
{
    int A[100],i, n;
    printf("Input n = ");
    scanf("%d",&n);
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

    int sum_odd = 0, count = 0;
    for (i = 0; i < n; i=i+2)
    {
        if(A[i] % 2 == 1)
        {
            sum_odd = sum_odd + A[i];
            count ++;
        }
    }

    if(count > 0)
    {
        float average_odd = (float)sum_odd/count;
        printf("\nOdd Average: %f", average_odd);
    }
    else
    {
        printf("Odd Average not found!");
    }
    return 0;
}