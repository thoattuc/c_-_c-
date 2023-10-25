#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n;
    do
    {
        printf("Input n = ");
        scanf("%d", &n);
    }
    while (n < 0 || n > 7);
    switch (n)
    {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        default:
            printf("Invalid input");
    }
}

