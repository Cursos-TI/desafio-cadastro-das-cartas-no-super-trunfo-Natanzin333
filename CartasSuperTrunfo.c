#include <stdio.h>

// Variáveis
struct CartaTrunfo {
    char estado[30];
    char codigo[20];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;
};

int main() {
    struct CartaTrunfo carta1, carta2;

    // Primeira carta

    printf("Digite o estado da carta 1: \n");
    scanf("%s", carta1.estado);

    printf("Digite o código da carta 1: \n");
    scanf("%s", carta1.codigo);

    printf("Digite a cidade da carta 1: \n");
    scanf("%s", carta1.cidade);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &carta1.populacao);


    printf("Digite a área em km² da carta 1: \n");
    scanf("%f", &carta1.area);


    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &carta1.pib);
    fflush(stdin);


    printf("Digite os pontos turísticos da carta 1: \n");
    scanf("%d", &carta1.pontos);
    fflush(stdin);


     printf("\n ==== \n");

    // Segunda carta

    printf("Digite o estado da carta 2: \n");
    scanf("%s", carta2.estado);

    printf("Digite o código da carta 2: \n");
    scanf("%s", carta2.codigo);

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", carta2.cidade);

    printf("Digite a população da carta 2: \n");
    scanf("%d", &carta2.populacao);

    printf("Digite a área em km² da carta 2: \n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &carta2.pib);

    printf("Digite os pontos turísticos da carta 2: \n");
    scanf("%d", &carta2.pontos);

    printf("\n=== Cartas Digitadas ===\n");

    // Exibindo os dados da primeira carta
    printf("=== Carta 1 ===\n");
    printf("Estado: %s - Código: %s\n", carta1.estado, carta1.codigo);
    printf("Cidade: %s - População: %d\n", carta1.cidade, carta1.populacao);
    printf("Área em km²: %.2f - PIB: %.2f\n", carta1.area, carta1.pib);
    printf("Pontos turísticos: %d\n\n", carta1.pontos);

    // Exibindo os dados da segunda carta
    printf("=== Carta 2 ===\n");
    printf("Estado: %s - Código: %s\n", carta2.estado, carta2.codigo);
    printf("Cidade: %s - População: %d\n", carta2.cidade, carta2.populacao);
    printf("Área em km²: %.2f - PIB: %.2f\n", carta2.area, carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos);

    return 0;
}
