#include <stdio.h>
#include <stdlib.h>

void main()
{
    float *ptr;
    int n = 5;
    ptr = calloc(n, sizeof(float));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element:", i);
        scanf("%f", &ptr[i]);
    }

    // free(ptr);
    ptr=realloc(ptr,4*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is : %.2f\n", i, ptr[i]);
    }
}