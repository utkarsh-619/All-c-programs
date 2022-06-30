#include <stdio.h>

void main()
{
    char c;
    FILE *ptr1, *ptr2;
    ptr1 = fopen("utkarsh.txt", "r");
    ptr2 = fopen("narayan.txt", "w");

    // fscanf(ptr,"%d%d%d",&a,&b,&c);
    // printf("%d  %d  %d",a,b,c);
    // fclose(ptr);

    c = fgetc(ptr1);
    while (c != EOF)
    {

        fprintf(ptr2, "%c", c);
        c = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);
}