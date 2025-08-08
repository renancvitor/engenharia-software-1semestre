#include <stdio.h>

float temperatura, umidade, temperaturaMaxima = 25.0, umidadeMaxima = 70.0;
unsigned int estoque, estoqueMinimo = 100;

void informativo()
{
    printf("\n~*~*~*~ VALORES SEGUROS: ~*~*~*~\n");
    printf("\nTemperatura máxima: %.1f graus célcius\n", temperaturaMaxima);
    printf("\nUmidade máxima: %.1f\n", umidadeMaxima);
    printf("\nEstoque mínimo:  %d\n", estoqueMinimo);
}

void entradaDados()
{
    printf("\nDigite a temperatura atual:  ");
    scanf("%f", &temperatura);

    printf("\nDigite a umidade atual:  ");
    scanf("%f", &umidade);

    printf("\nDigite o estoque atual:  ");
    scanf("%d", &estoque);
}

void saidaDados()
{
    if (temperatura > temperaturaMaxima)
    {
        printf("\nTemperatura atual está em %.1f graus célcius, está acima de %.1f graus célcius e excede o valor máximo. Atenção!", temperatura, temperaturaMaxima);
    }
    else
    {
        printf("\nTemperatura atual dentro dos parâmetros! (%.1f)", temperatura);
    }

    if (umidade > umidadeMaxima)
    {
        printf("\nUmidade atual está em %.1f, está acima de %.1f e excede o valor máximo. Atenção!", umidade, umidadeMaxima);
    }
    else
    {
        printf("\nUmidade atual dentro dos parâmetros! (%.1f)", umidade);
    }

    if (estoque < estoqueMinimo)
    {
        printf("\nEstoque atual em %d está abaixo do mínimo sugerido de %d. Atenção!", estoque, estoqueMinimo);
    }
    else
    {
        printf("\nEstoque atual dentro dos parâmetros! (%d)", estoque);
    }
}

int main()
{
    informativo();
    entradaDados();
    saidaDados();

    return 0;
}