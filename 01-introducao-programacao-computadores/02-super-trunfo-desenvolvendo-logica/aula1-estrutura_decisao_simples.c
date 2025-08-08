#include <stdio.h>

int main()
{
    int numero1 = 10, numero2 = 5;

    if (numero1 > numero2)
    {
        printf("Número 1 é maior do que número 2\n");
    }

    printf("\nFora do if\n");

    int idadePessoa = 15;

    if (idadePessoa < 16)
    {
        printf("\nA idade atual da pessoa é %d anos. Menores de 16 anos de idade não podem votar.\n", idadePessoa);
    }
    
    float temperaturaAmbiente = 29.0;

    if (temperaturaAmbiente >= 30.0)
    {
        printf("\nEstá fazendo %.1f! Está calor!!\n", temperaturaAmbiente);
    } else
    {
        printf("\nNão está fazendo calor.\n");
    }
    
    float nota = 59;

    if (nota >= 60)
    {
        printf("\nParabéns, você tirou nota %.1f e foi aprovado!", nota);
    } else
    {
        printf("\nInfelizmente não foi possível te aprovar devido a nota %.1f...", nota);
    }
    
    int idade1 = 25, idade2 = 30;
    char* maisVelho = idade1 > idade2 ? "pessoa 1 é mais velha" : "pessoa 2 é mais velha";
    int comparaIdade = idade1 > idade2 ? idade1 : idade2;

    printf("\nA %s com %d anos.\n", maisVelho, comparaIdade);

    int numeroMod = 4;

    if (numeroMod % 2 != 0)
    {
        printf("\nO número %d é ímpar!\n", numeroMod);
    } else
    {
        printf("\nO número %d é par!\n", numeroMod);
    }

    int estoque = 300, estoqueMinimo = 500;

    if (estoque < estoqueMinimo)
    {
        printf("\nEstoque baixo. O estoque mínimo é %d e seu estoque está em %d.\n", estoqueMinimo, estoque);
    } else
    {
        printf("\nEstoque atual: %d. Está dentro dos conformes!\n", estoque);
    }
    
    return 0;
}