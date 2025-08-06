#include <stdio.h>

int main() {
    
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    /*printf("Entre com o número1:  ");
    scanf("%d", &numero1);

    printf("\nEntre com o número2:  ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("\nA soma é:  %d\n", soma);
    printf("\nA subtração é:  %d\n", subtracao);
    printf("\nA multiplicação é:  %d\n", multiplicacao);
    printf("\nA divisão é:  %d\n", divisao);

    int numeroUm = 10, numeroDois, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    resultado += 20;
    printf("Resultado: %d\n", resultado);

    resultado -= numeroUm;
    printf("Resultado: %d\n", resultado);

    resultado *= 5;
    printf("Resultado: %d\n", resultado);

    resultado /= 2;
    printf("Resultado: %d\n", resultado);

    int numeroI = 10, numeroII = 10;

    printf("Antes incremento = %d\n", numeroI);
    numeroI++;
    printf("\nDepois incremento = %d\n", numeroI);

    printf("\n");

    printf("Antes decremento = %d\n", numeroII);
    numeroII--;
    printf("\nDepois decremento = %d\n", numeroII);*/

    int numeroUno = 1, resultadoUno;

    printf("Antes incremento: %d\n", numeroUno);

    resultadoUno = numeroUno++;
    printf("Após Pós-incremento - Número Uno: %d - Resultado: %d\n", numeroUno, resultadoUno);

    resultadoUno = ++numeroUno;
    printf("Após Pré-incremento - Número Uno: %d - Resultado: %d\n", numeroUno, resultadoUno);

    printf("Antes decremento: %d\n", numeroUno);

    resultadoUno = numeroUno--;
    printf("Após Pós-decremento - Número Uno: %d - Resultado: %d\n", numeroUno, resultadoUno);

    resultadoUno = --numeroUno;
    printf("Após Pré-decremento - Número Uno: %d - Resultado: %d\n", numeroUno, resultadoUno);
}