#include <stdio.h>
#include <conio.h>

/* f = 1 - 2 + 3 - 4 + ... + (-1)^(n+1)*n */
int main()
{
    int i, n, f;
    do
    {
        printf("Input n = ");
        scanf("%d", &n);
    }
    while (n <= 0);
    f = 0;
    int k = 1;  // Start k at 1
    for (i = 1; i <= n; i++)
    {
        f = f + (k * i); // Add k*i to f
        k = -k; // Toggle the sign of k
    }
    printf("f(%d) = %d", n, f);
}

