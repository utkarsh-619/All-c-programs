#include <stdio.h>

void table(int a, int b)
{
    if (b >= 1)
    {
        printf("%d * %d = %d\n", a, (11 - b), (a * (11 - b)));
        table(a, b - 1);
    }
}

void main()
{
    int a = 9;
    table(a, 10);
}