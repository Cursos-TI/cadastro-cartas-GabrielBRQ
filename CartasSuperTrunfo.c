#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    int population1, population2, attractions1, attractions2;
    char codigoEstado1, codigoEstado2;
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[50], nomeCidade2[50];
    float area1, area2, pib1, pib2;

    printf("----Crie a Carta 1---- \n");

    printf("Digite o Estado da carta 1: \n");
    scanf(" %c", codigoEstado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &population1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &attractions1);

    printf("----Crie a Carta 2---- \n");

    printf("Digite o Estado da carta 2: \n");
    scanf(" %c", codigoEstado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &population2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &attractions2);

    printf("Carta 1: \n");
    printf("Estado: %c \n", codigoEstado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", population1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", attractions1);

    printf("--------------------------- \n");

    printf("Carta 2: \n");
    printf("Estado: %c \n", codigoEstado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", population2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", attractions2);

    return 0;
}