#include <stdio.h>
union array
{
    int integer[5];
    float floatarr[5];
    char character[5];
};

int main()
{

    union array Arr;

    for (int i = 0; i < 5; i++)
    {
        Arr.integer[i] = i + 1;
        Arr.floatarr[i] = (i + 1) * 0.8;
        Arr.character[i] = 'A' + i;
    }

    printf("Integer Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", Arr.integer[i]);
    }
    printf("\n");

    printf("Float Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", Arr.floatarr[i]);
    }
    printf("\n");

    printf("Character Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", Arr.character[i]);
    }
    printf("\n");

    return 0;
}