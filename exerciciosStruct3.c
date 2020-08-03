#include <stdio.h>

typedef struct No
{
    int numero;
}No;

int main()
{
    No X,Y,Z;

    Z.numero = 10;
    Y.numero = 20;
    X = Z = Y;

    printf("%d\n %d\n",X.numero, Z.numero);
}
