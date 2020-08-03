#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    if (argc == 1)
    {
        return 1;
    }
    else if (((argc > 2) || (strlen(argv[1]) > 2)))
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }else if (atoi(argv[1]) < 10 && strlen(argv[1]) == 2)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }


    int shift = atoi(argv[1]);

    string plaintext = get_string("Text: ");

    printf("ciphertext: ");

    for (int index = 0; plaintext[index] != '\0'; index++)
    {
        char aux = plaintext[index];

        if (aux >= 97 && aux <= 122)
        {
            if ((aux + (shift % 26)) > 122)
            {
                int adjust = ((aux + (shift % 26)) - 122);
                printf("%c", 96 + adjust);
            }
            else
            {
                printf("%c", aux + (shift % 26));
            }
        }
        else if (aux >= 65 && aux <= 90)
        {
            if ((aux + (shift % 26)) > 90)
            {
                int adjust = ((aux + (shift % 26)) - 90);
                printf("%c", 64 + adjust);
            }
            else
            {
                printf("%c", aux + (shift % 26));
            }
        }
        else
        {
            printf("%c", aux);
        }
    }

    printf("\n");

    return 0;
}