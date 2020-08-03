#include <stdio.h>

void max_min(int v[], int *max, int *min)
{
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (v[i] > *max)
                *max = v[i];
            if (v[i] < *min)
                *min = v[i];
        }
    }
}

void print(int *max, int *min)
{
    printf("Max: %d | Min: %d\n", *max, *min);
}

int main(void)
{

    int v[] = {-20, 31, 28, -10, 12};

    int max = 0, min = 0;

    max_min(v, &max, &min);

    v[0] = 10;

    max_min(v, &max, &min);
    print(&max, &min);

    return 0;
}