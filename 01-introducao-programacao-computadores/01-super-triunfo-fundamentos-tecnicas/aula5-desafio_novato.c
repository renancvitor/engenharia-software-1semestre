#include <stdio.h>
#include <string.h>

void readLine(char *buffer, int size)
{
    if (fgets(buffer, size, stdin))
    {
        buffer[strcspn(buffer, "\n")] = '\0';
    }
}

int main()
{

    char estado;
    char codigoCarta[50], nomeCidade[50];
    int populacao, numeroPontosTuristicos;
    double area, pib;

    printf("\n***Super Trunfo - Desafio novato***\n");

    char estadoStr[10], populacaoStr[20], areaStr[20], pibStr[20], pontosStr[20];

    printf("\nDigite abaixo os dados da segunda carta:");

    printf("\nEstado: ");
    readLine(estadoStr, sizeof(estadoStr));
    estado = estadoStr[0];

    printf("Código: ");
    readLine(codigoCarta, sizeof(codigoCarta));

    printf("Nome da Cidade: ");
    readLine(nomeCidade, sizeof(nomeCidade));

    printf("População: ");
    readLine(populacaoStr, sizeof(populacaoStr));
    sscanf(populacaoStr, "%d", &populacao);

    printf("Área: ");
    readLine(areaStr, sizeof(areaStr));
    sscanf(areaStr, "%lf", &area);

    printf("PIB: ");
    readLine(pibStr, sizeof(pibStr));
    sscanf(pibStr, "%lf", &pib);

    printf("Número de Pontos Turísticos: ");
    readLine(pontosStr, sizeof(pontosStr));
    sscanf(pontosStr, "%d", &numeroPontosTuristicos);

    char estado2;
    char codigoCarta2[50], nomeCidade2[50];
    int populacao2, numeroPontosTuristicos2;
    double area2, pib2;

    char estadoStr2[10], populacaoStr2[20], areaStr2[20], pibStr2[20], pontosStr2[20];

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
    sscanf(populacaoStr2, "%d", &populacao2);

    printf("Área: ");
    readLine(areaStr2, sizeof(areaStr2));
    sscanf(areaStr2, "%lf", &area2);

    printf("PIB: ");
    readLine(pibStr2, sizeof(pibStr2));
    sscanf(pibStr2, "%lf", &pib2);

    printf("Número de Pontos Turísticos: ");
    readLine(pontosStr2, sizeof(pontosStr2));
    sscanf(pontosStr2, "%d", &numeroPontosTuristicos2);

    printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");

    printf("\nPrimeira carta:");
    printf("\nEstado: %c", estado);
    printf("\nCódigo da Carta: %s", codigoCarta);
    printf("\nNome da Cidade: %s", nomeCidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f km²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nNúmero de Pontos Turísticos: %d\n", numeroPontosTuristicos);

    printf("\nSegunda carta:");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo da Carta: %s", codigoCarta2);
    printf("\nNome da Cidade: %s", nomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", numeroPontosTuristicos2);

    return 0;
}