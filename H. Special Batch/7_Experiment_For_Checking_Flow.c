#include <stdio.h>

int main()
{
    int i = 100;
    int j = 200;

    if(i!=100 && ++j)
    {
        printf("Inside if\n");
    }
    else
    {
        printf("Inside else\n");
    }

    printf("j = %d\n", j);


    int k = 100;
    int l = 200;
    int m = 300;

    if(!(k!=100 && l++ || ++m))
    {
        printf("Inside if\n");
    }
    else
    {
        printf("Inside else\n");
    }

    printf("l = %d\n", l);
    printf("m = %d\n", m);

    return 0;
}