#include <stdio.h>

void calcQ(int *y)
{
    *y = (*y) * (*y);
}

int main(void)
{

    int x = 10;
    calcQ(&x);
    printf("%d\n", x);
    return 0;
}