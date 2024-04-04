#include <stdio.h>
union Data
{
    int integer;
    float point;
    char character;
};

int main()
{
    union Data ask;
    ask.integer = 6;
    ask.point = 18.99;
    ask.character = 'k';
    printf("Integer: %d\n", ask.integer);
    printf("Float: %.2f\n", ask.point);
    printf("Character: %c\n", ask.character);

    return 0;
}