#include <stdio.h>

int main() {
    // Declaração das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada dos dados da Carta 1
    printf("Digite o estado (letra de A a H): \n");
    scanf("%c", &estado1);  

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", codigo1);


    printf("Digite o nome da cidade: \n");
    scanf(" %s]", nomeCidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da Carta 2
    printf("\nDigite o estado (letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nomeCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    return 0;
}
