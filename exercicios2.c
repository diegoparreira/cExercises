#include <stdio.h>
#include <string.h>

int main()
{
    char texto[100] = "ABC AB ABA ADBAAB ABCAB BAC BAAB BDAAB ACABA ABDCAB";
    char padrao[3] = "BA";
    int n, i, count;

    n = strlen(texto) - 1;
    i = 0;
    count = 0;

    while (i < n)
    {
        char aux = texto[i];
        texto[i] = texto[n];
        texto[n] = aux;
        i++;
        n--;
    }

    for (int i = 0; texto[i] != '\0'; i++)
    {
        int x = 1;
        for (int j = 0; padrao[j] != '\0'; j++)
        {
            if (texto[i + j] != padrao[j])
            {
                x = 0;
                break;
            }
        }

        x == 1 ? count++ : 0;
    }

    printf("%d\n", count);
    return 0;
}
