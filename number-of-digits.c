#include <stdio.h>

int main()
{
    int a, n = 0;

    printf("enter a number :");
    scanf("%d", &a);

    while(a != 0)
    {
        a = a / 10;
        n = n + 1;
    }

    printf("number of digits=%d\n", n);

    return 0;
}
