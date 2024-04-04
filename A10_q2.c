#include <stdio.h>
struct pop
{
    int integer;
    char character;
};

union Data
{
    int integer;
    char character;
};

int main()
{

    printf("Size of structure: %d bytes\n", sizeof(struct pop));
    printf("Size of union: %d bytes\n", sizeof(union Data));

    return 0;
}