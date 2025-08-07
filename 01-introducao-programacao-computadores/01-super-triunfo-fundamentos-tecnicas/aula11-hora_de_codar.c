#include <stdio.h>
#include <string.h>

char produtoA[50] = "Produto A";
char produtoB[50] = "Produto B";

unsigned int estoqueProdutoA = 1000;
unsigned int estoqueProdutoB = 2000;

float valorProdutoA = 10.50;
float valorProdutoB = 20.40;

unsigned int estoqueMinimoProdutoA = 500;
unsigned int estoqueMinimoProdutoB = 2500;

double valorTotalProdutoA;
double valorTotalProdutoB;

int resultadoA, resultadoB;

double calculaValorTotalProdutoA()
{
    return (double)valorProdutoA * estoqueProdutoA;
}

double calculaValorTotalProdutoB()
{
    return (double)valorProdutoB * estoqueProdutoB;
}

bool comparaProdutoA()
{
    return estoqueProdutoA > estoqueMinimoProdutoA;
}

bool comparaProdutoB()
{
    return estoqueProdutoB > estoqueMinimoProdutoB;
}

bool comparaValorProdutos()
{
    valorTotalProdutoA = calculaValorTotalProdutoA();
    valorTotalProdutoB = calculaValorTotalProdutoB();

    if (calculaValorTotalProdutoA() > calculaValorTotalProdutoB())
    {
        printf("\nO valor total do produto A (R$ %.2f) é maior do que o valor total de produto B (R$ %.2f).\n", valorTotalProdutoA, valorTotalProdutoB);
        return true;
    }
    else
    {
        printf("\nO valor total do produto B (R$ %.2f) é maior do que o valor total de produto A (R$ %.2f).\n", valorTotalProdutoB, valorTotalProdutoA);
        return false;
    }
}

void saidaDados()
{
    printf("Produto A %s tem estoque %u e o valor unitário é R$ %.2f. Valor total em estoque R$ %.2f\n", produtoA, estoqueProdutoA, valorProdutoA, valorTotalProdutoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);

    printf("\nProduto B %s tem estoque %u e o valor unitário é R$ %.2f. Valor total em estoque R$ %.2f\n", produtoB, estoqueProdutoB, valorProdutoB, valorTotalProdutoB);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);
}

int main()
{
    valorTotalProdutoA = calculaValorTotalProdutoA();
    valorTotalProdutoB = calculaValorTotalProdutoB();

    resultadoA = comparaProdutoA();
    resultadoB = comparaProdutoB();

    saidaDados();

    comparaValorProdutos();
    return 0;
}