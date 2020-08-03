#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct client
{
    char name[50];
} client;

typedef struct product
{
    char name[50];
    double price;

} product;

typedef struct cart
{
    client c;
    product p[100];
    int index_p;
} cart;

product createProduct(int i)
{
    product p;
    strcpy(p.name, "Product_X");
    p.name[8] = '0' + i;
    p.price = rand() % 100;
    return p;
}

cart addProduct(cart carrinho, product p)
{
    carrinho.p[carrinho.index_p] = p;
    carrinho.index_p += 1;
    return carrinho;
}

int main(void)
{

    struct client cliente;
    struct product produtos[10];
    struct cart carrinho;
    struct cart carrinho2;
    int i;

    strcpy(cliente.name, "Joao da Silva");
    carrinho.c = cliente;

    strcpy(cliente.name, "Le Roque do Band");
    carrinho2.c = cliente;

    for (i = 0; i <= 5; i++)
    {
        produtos[i] = createProduct(i);
        printf("%s - %.2f\n", produtos[i].name, produtos[i].price);
    }

    carrinho.index_p = 0;
    carrinho = addProduct(carrinho, produtos[3]);
    carrinho = addProduct(carrinho, produtos[2]);
    carrinho2 = addProduct(carrinho2, produtos[0]);
    carrinho = addProduct(carrinho, produtos[5]);

    produtos[3].price = 85.00;
    carrinho = addProduct(carrinho, produtos[3]);

    strcpy(carrinho.c.name, "Alabama");


    printf("\n\nMeu Carrinho Online\n\n");
    printf("Carrinho de: %s\n", carrinho.c.name);
    for (i = 0; i < carrinho.index_p; i++)
    {
        printf("%s = %.2f\n", carrinho.p[i].name, carrinho.p[i].price);
    }

    printf("\n\nMeu Carrinho Online\n\n");
    printf("Carrinho de: %s\n", carrinho2.c.name);
    for (i = 0; i < carrinho2.index_p; i++)
    {
        printf("%s = %.2f\n", carrinho2.p[i].name, carrinho2.p[i].price);
    }

    printf("%d\n", carrinho.index_p);

    for (i = 0; i <= 5; i++)
    {
        printf("%s - %.2f\n", produtos[i].name, produtos[i].price);
    }

    return 0;
}
