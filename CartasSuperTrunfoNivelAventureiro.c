#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da Estrutura
typedef struct {
    char nome[50];
    int populacao;
    float pib, area;
    int nPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

void cadastrarCarta(Carta *carta) {
    printf("Nome do país: ");
    scanf("%s", carta->nome);
    printf("População: ");
    scanf("%d", &carta->populacao);
    printf("Área: ");
    scanf("%f", &carta->area);
    printf("PIB: ");
    scanf("%f", &carta->pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->nPontosTuristicos);

    // Cálculo dos novos atributos
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;
}

void exibirCarta(Carta carta) {
    printf("Nome: %s\n", carta.nome);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Número de pontos turísticos: %d\n", carta.nPontosTuristicos);
    printf("Densidade Populacional: %.2f\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta.pibPerCapita);
}

void compararCartas(Carta carta1, Carta carta2, int atributo) {
    printf("Comparando cartas pelo atributo %d:\n", atributo);
    switch (atributo) {
        case 1:
            printf("População: %d vs %d\n", carta1.populacao, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Carta 1 vence!\n");
            } else if (carta1.populacao < carta2.populacao) {
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Área: %.2f vs %.2f\n", carta1.area, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Carta 1 vence!\n");
            } else if (carta1.area < carta2.area) {
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("PIB: %.2f vs %.2f\n", carta1.pib, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Carta 1 vence!\n");
            } else if (carta1.pib < carta2.pib) {
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Número de pontos turísticos: %d vs %d\n", carta1.nPontosTuristicos, carta2.nPontosTuristicos);
            if (carta1.nPontosTuristicos > carta2.nPontosTuristicos) {
                printf("Carta 1 vence!\n");
            } else if (carta1.nPontosTuristicos < carta2.nPontosTuristicos) {
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Densidade Populacional: %.2f vs %.2f\n", carta1.densidadePopulacional, carta2.densidadePopulacional);
            if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
                printf("Carta 1 vence!\n");
            } else if (carta1.densidadePopulacional > carta2.densidadePopulacional) {
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 6:
            printf("PIB per Capita: %.2f vs %.2f\n", carta1.pibPerCapita, carta2.pibPerCapita);
            if (carta1.pibPerCapita > carta2.pibPerCapita) {
                printf("Carta 1 vence!\n");
            } else if (carta1.pibPerCapita < carta2.pibPerCapita) {
                printf("Carta 2 vence!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Atributo inválido!\n");
            break;
    }
}

int main() {
    Carta carta1, carta2;
    int atributo;

    printf("Jogo Super Trunfo - Nível Aventureiro\n");

    // Cadastro das Cartas
    printf("Cadastro da Carta 1:\n");
    cadastrarCarta(&carta1);
    printf("Cadastro da Carta 2:\n");
    cadastrarCarta(&carta2);

    // Exibição das Cartas
    printf("Dados da Carta 1:\n");
    exibirCarta(carta1);
    printf("Dados da Carta 2:\n");
    exibirCarta(carta2);

    // Menu Interativo
    printf("Escolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    scanf("%d", &atributo);

    // Comparação das Cartas
    compararCartas(carta1, carta2, atributo);

    return 0;
}