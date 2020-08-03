#include <stdio.h>
#include <string.h>

typedef struct aluno
{
    char nome[50];
    double ra;
} aluno;

aluno novoAluno(char nome[], double ra)
{
    aluno A;
    strcpy(A.nome, nome);
    A.ra = ra;
    return A;
}

void imprime(aluno X1)
{
    printf("Nome: %s - RA: %.f\n", X1.nome, X1.ra);
}

int main(void)
{
    struct aluno X1, X2;
    X1 = novoAluno("Joao", 123);
    X2 = novoAluno("Maria", 321);
    imprime(X2);
    X1 = X2;
    X1.ra = 111;
    imprime(X1);
    imprime(X2);

    printf("Nome: %s - RA: %.f\n", X1.nome, X1.ra);

    return 0;
}