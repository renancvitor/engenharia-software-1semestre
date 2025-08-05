#include <stdio.h>

int main () {
    printf("Olá, mundo! \n");

    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Sergio";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura do %s é: %.2f\n", nome, altura);
    printf("A opção é: %c\n", opcao);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é %d", idade);

    printf("\nDigite sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é %.2f", altura);

    printf("\nDigite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é %s", nome);

    printf("\nDigite uma opção: ");
    scanf(" %c", &opcao);
    printf("Sua opção é %c", opcao);

    return 0;
}