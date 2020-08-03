#include <stdio.h>

int main()
{

    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int top = 10;
    int x = v[top--];
    
    

    printf("%d \n %d", v[top--], x);

    return 0;

}