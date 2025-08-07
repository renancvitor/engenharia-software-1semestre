#include <stdio.h>

double nota1, nota2, nota3, media;

// Função genérica para entrada de dados
void entradaDados()
{
    printf("\n***CÁLCULO DE MÉDIA NOTA***\n");
    printf("\nDigite a primeira nota:  ");
    scanf("%lf", &nota1);

    printf("\nDigite a segunda nota:  ");
    scanf("%lf", &nota2);

    printf("\nDigite a terceira nota:  ");
    scanf("%lf", &nota3);
}

// Função genérica para cálculo da média
float calcularMedia()
{
    return (nota1 + nota2 + nota3) / 3;
}

// Função genérica para exibir dados
void exibirMedia()
{
    printf("\nA média é:  %.2f", media);
}

int main()
{

    entradaDados();
    media = calcularMedia();
    exibirMedia();

    return 0;
}