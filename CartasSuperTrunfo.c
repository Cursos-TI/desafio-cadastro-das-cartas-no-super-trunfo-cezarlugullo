#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Passo 1: Definição da Estrutura
// Crie uma estrutura chamada Carta com os seguintes campos:
typedef struct {
    int populacao;
    float pib, area;
    int nPontosTuristicos;
} Carta;

int main() {
    Carta carta1, carta2;

    printf("Bem vindo ao auxiliador de cartas do SuperTrunfo\n");
    
    // Passo 2: Cadastro das Cartas
    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Entre com o numero da população: \n");
    scanf("%i", &carta1.populacao);
    printf("Entre com a área: \n");
    scanf("%f", &carta1.area);
    printf("Entre com o PIB: \n");
    scanf("%f", &carta1.pib);
    printf("Entre com o número de pontos turísticos: \n");
    scanf("%i", &carta1.nPontosTuristicos);

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Entre com o numero da população: \n");
    scanf("%i", &carta2.populacao);
    printf("Entre com a área: \n");
    scanf("%f", &carta2.area);
    printf("Entre com o PIB: \n");
    scanf("%f", &carta2.pib);
    printf("Entre com o número de pontos turísticos: \n");
    scanf("%i", &carta2.nPontosTuristicos);


    // Exibição dos Dados da Carta 1
    printf("Dados da Carta 1:\n");
    printf("População: %i\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Número de pontos turísticos: %i\n", carta1.nPontosTuristicos);

    // Exibição dos Dados da Carta 2
    printf("Dados da Carta 2:\n");
    printf("População: %i\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Número de pontos turísticos: %i\n", carta2.nPontosTuristicos);

    return 0;
}