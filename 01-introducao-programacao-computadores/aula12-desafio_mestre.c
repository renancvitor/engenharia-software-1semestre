#include <stdio.h>
#include <string.h>

char estado, estado2;
char codigoCarta[50], nomeCidade[50], codigoCarta2[50], nomeCidade2[50];
unsigned long int populacao, populacao2;
int numeroPontosTuristicos, numeroPontosTuristicos2;
double area, pib, area2, pib2, pibPerCapta, pibPerCapta2, densidadePopulacional, densidadePopulacional2;

void readLine(char *buffer, int size)
{
    if (fgets(buffer, size, stdin))
    {
        buffer[strcspn(buffer, "\n")] = '\0';
    }
}

void entradaDados()
{
    char estadoStr[10], populacaoStr[20], areaStr[20], pibStr[20], pontosStr[20];
    char estadoStr2[10], populacaoStr2[20], areaStr2[20], pibStr2[20], pontosStr2[20];

    printf("\nDigite abaixo os dados da primeira carta:");

    printf("\nEstado: ");
    readLine(estadoStr, sizeof(estadoStr));
    estado = estadoStr[0];

    printf("Código: ");
    readLine(codigoCarta, sizeof(codigoCarta));

    printf("Nome da Cidade: ");
    readLine(nomeCidade, sizeof(nomeCidade));

    printf("População: ");
    readLine(populacaoStr, sizeof(populacaoStr));
    sscanf(populacaoStr, "%lu", &populacao);

    printf("Área: ");
    readLine(areaStr, sizeof(areaStr));
    sscanf(areaStr, "%lf", &area);

    printf("PIB: ");
    readLine(pibStr, sizeof(pibStr));
    sscanf(pibStr, "%lf", &pib);

    printf("Número de Pontos Turísticos: ");
    readLine(pontosStr, sizeof(pontosStr));
    sscanf(pontosStr, "%d", &numeroPontosTuristicos);

    printf("\nDigite abaixo os dados da segunda carta:");

    printf("\nEstado: ");
    readLine(estadoStr2, sizeof(estadoStr2));
    estado2 = estadoStr2[0];

    printf("Código: ");
    readLine(codigoCarta2, sizeof(codigoCarta2));

    printf("Nome da Cidade: ");
    readLine(nomeCidade2, sizeof(nomeCidade2));

    printf("População: ");
    readLine(populacaoStr2, sizeof(populacaoStr2));
    sscanf(populacaoStr2, "%lu", &populacao2);

    printf("Área: ");
    readLine(areaStr2, sizeof(areaStr2));
    sscanf(areaStr2, "%lf", &area2);

    printf("PIB: ");
    readLine(pibStr2, sizeof(pibStr2));
    sscanf(pibStr2, "%lf", &pib2);

    printf("Número de Pontos Turísticos: ");
    readLine(pontosStr2, sizeof(pontosStr2));
    sscanf(pontosStr2, "%d", &numeroPontosTuristicos2);

    printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
}

double calcularDensidadePopulacional()
{
    if (area != 0 && populacao != 0)
    {
        return (double)populacao / area;
    }
    else
    {
        printf("O valor de área e população não pode ser zero!");
        return 0.0;
    }
}

double calcularPibPerCapta()
{
    if (pib != 0 && populacao != 0)
    {
        return (pib * 1e9) / (double)populacao;
    }
    else
    {
        printf("O valor de área e população não pode ser zero!");
        return 0.0;
    }
}

double calcularDensidadePopulacional2()
{
    if (area2 != 0 && populacao2 != 0)
    {
        return (double)populacao2 / area2;
    }
    else
    {
        printf("O valor de área e população não pode ser zero!");
        return 0.0;
    }
}

double calcularPibPerCapta2()
{
    if (pib2 != 0 && populacao2 != 0)
    {
        return (pib2 * 1e9) / (double)populacao2;
    }
    else
    {
        printf("O valor de área e população não pode ser zero!");
        return 0.0;
    }
}

void exibeCalculosCarta1()
{
    densidadePopulacional = calcularDensidadePopulacional();
    pibPerCapta = calcularPibPerCapta();

    printf("Densidade Populacional:  %.2lf hab/km²", densidadePopulacional);
    printf("\nPIB per Capita:  %.2lf reais", pibPerCapta);
    printf("\n");
}

void exibeCalculosCarta2()
{
    densidadePopulacional2 = calcularDensidadePopulacional2();
    pibPerCapta2 = calcularPibPerCapta2();

    printf("Densidade Populacional:  %.2lf hab/km²", densidadePopulacional2);
    printf("\nPIB per Capita:  %.2lf reais", pibPerCapta2);
    printf("\n");
}

double superPoderCarta()
{
    double inversoDensidade = 1.0 / densidadePopulacional;

    double superPoder = (double)populacao + area + pib + numeroPontosTuristicos + pibPerCapta + inversoDensidade;

    return superPoder;
}

double superPoderCarta2()
{
    double inversoDensidade2 = 1.0 / densidadePopulacional2;

    double superPoder2 = (double)populacao2 + area2 + pib2 + numeroPontosTuristicos2 + pibPerCapta2 + inversoDensidade2;

    return superPoder2;
}

void saidaDados()
{
    printf("\nPrimeira carta:");
    printf("\nEstado: %c", estado);
    printf("\nCódigo da Carta: %s", codigoCarta);
    printf("\nNome da Cidade: %s", nomeCidade);
    printf("\nPopulação: %lu", populacao);
    printf("\nÁrea: %.2lf km²", area);
    printf("\nPIB: %.2lf bilhões de reais", pib);
    printf("\nNúmero de Pontos Turísticos: %d\n", numeroPontosTuristicos);
    exibeCalculosCarta1();

    printf("\nSegunda carta:");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo da Carta: %s", codigoCarta2);
    printf("\nNome da Cidade: %s", nomeCidade2);
    printf("\nPopulação: %lu", populacao2);
    printf("\nÁrea: %.2lf km²", area2);
    printf("\nPIB: %.2lf bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    exibeCalculosCarta2();

    printf("População: Carta %d venceu (%d)\n", populacao > populacao2 ? 1 : 2, populacao > populacao2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area > area2 ? 1 : 2, area > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", pib > pib2 ? 1 : 2, pib > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", numeroPontosTuristicos > numeroPontosTuristicos2 ? 1 : 2, numeroPontosTuristicos > numeroPontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadePopulacional < densidadePopulacional2 ? 1 : 2, densidadePopulacional < densidadePopulacional2 ? 1 : 0); // quanto menor, melhor
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapta > pibPerCapta2 ? 1 : 2, pibPerCapta > pibPerCapta2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoderCarta1() > superPoderCarta2() ? 1 : 2, superPoderCarta1() > superPoderCarta2() ? 1 : 0);
}

int main()
{
    printf("\n***Super Trunfo - Desafio aventureiro***\n");

    entradaDados();
    superPoderCarta();
    superPoderCarta2();
    saidaDados();

    return 0;
}
