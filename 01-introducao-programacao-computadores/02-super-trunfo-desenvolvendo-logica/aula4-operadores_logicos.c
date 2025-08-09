#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    if (a > 0 && b > 0)
    {
        printf("Os dois números são positivos!");
    }
    else
    {
        printf("Pelo menos um dos números é negativo.");
    }

    if (a > 0 || b > 0)
    {
        printf("Pelo menos um dos números é positivo.\n");
    }
    else
    {
        printf("Os dois números são negativos.\n");
    }

    int x = 0;

    if (!x)
    {
        printf("A variável x é zero.\n");
    }
    else
    {
        printf("A variável x é diferente de zero.\n");
    }

    int y = 10;

    if (!(y > 0))
    {
        printf("A variável y é negativa.\n");
    }
    else
    {
        printf("A variável y é positiva.\n");
    }
}