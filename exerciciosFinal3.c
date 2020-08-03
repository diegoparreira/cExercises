#include <stdio.h>
#include <math.h>

typedef struct pessoas
{
    int idade[100];
    int index;
} pessoas;

void add(pessoas *p, int idade)
{
    p->idade[p->index++] = idade;
}

int sum(pessoas *p)
{
    int sum = 0;
    for (int i = 0; i < p->index; i++)
    {
        sum += p->idade[i];
    }

    return sum;
}

double media(pessoas *p)
{
    return sum(p) * 1.0 / p->index;
}

double square(double s)
{
    return s * s;
}

double dp(pessoas *p)
{
    double c = 0;
    double mean = media(p);
    for (int i = 0; i < p->index; i++)
    {
        c += square(p->idade[i] - mean);
    }

    double result = sqrt(c / p->index);

    return result;
}

int main()
{
    pessoas p;
    p.index = 0;
    double m;

    add(&p, 17);
    add(&p, 21);
    add(&p, 15);
    add(&p, 12);
    printf("%d\n", p.index);

    printf("Soma das idades: %d\n", sum(&p));
    m = media(&p);

    printf("Media de idades: %.2f\n", m);
    printf("Desvio Padrao: %.2f\n", dp(&p));

    return 0;
}