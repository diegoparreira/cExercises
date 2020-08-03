#include <stdio.h>

int main()
{
    int a = 10, b = 5, *c = 0;

    c = &b;
    b = a;
    *c += a;

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}