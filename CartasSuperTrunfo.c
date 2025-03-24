#include <stdio.h>

// Variáveis
struct CartaTrunfo {
    char estado[30];
    char codigo[20];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float pibpercapita;
    long double superpoder;
    float densidadeinversa;
    
    
    

};

int main() {
    struct CartaTrunfo carta1, carta2;

    // Primeira carta

    printf("===Carta 1===\n");
    printf("Digite os dados da primeira carta");
    printf("===\n");

    printf("Digite o estado da carta 1: \n");
    scanf("%s", carta1.estado);

    printf("Digite o código da carta 1: \n");
    scanf("%s", carta1.codigo);

    printf("Digite a cidade da carta 1: \n");
    scanf("%s", carta1.cidade);

    printf("Digite a população da carta 1: \n");
    scanf("%lu", &carta1.populacao);


    printf("Digite a área em km² da carta 1: \n");
    scanf("%f", &carta1.area);


    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &carta1.pib);
    fflush(stdin);


    printf("Digite os pontos turísticos da carta 1: \n");
    scanf("%d", &carta1.pontos);
    fflush(stdin);


    printf("\n=== Cartas Digitadas ===\n");

    // Exibindo os dados da primeira carta
    printf("=== Carta 1 ===\n");
    printf("Estado: %s - Código: %s\n", carta1.estado, carta1.codigo);
    printf("Cidade: %s - População: %lu\n", carta1.cidade, carta1.populacao);
    printf("Área em km²: %.2f - PIB: %.2f bilhões\n", carta1.area, carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos);



    carta1.pibpercapita = (carta1.pib * 1.0e9) / carta1.populacao;
    printf("PIB per Capita: %.2f reais\n", carta1.pibpercapita);
    
    carta1.densidade = carta1.populacao / carta1.area;
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    
    //calculo carta 1
    carta1.densidadeinversa = 1.0 / carta1.densidade;

    carta1.superpoder = (double)carta1.populacao + (double)carta1.area + (double)(carta1.pib * 1.0e9) + (double)carta1.pontos + (double)carta1.pibpercapita + carta1.densidadeinversa;


    printf("Densidade Iversa: %f\n", carta1.densidadeinversa);
    printf("Super Poder: %.2Lf\n", carta1.superpoder);

    // Segunda carta

    printf("===Carta 2===");
    printf("Digite os dados da segunda carta\n");
    printf("===\n");

    printf("Digite o estado da carta 2: \n");
    scanf("%s", carta2.estado);

    printf("Digite o código da carta 2: \n");
    scanf("%s", carta2.codigo);

    printf("Digite a cidade da carta 2: \n");
    scanf("%s", carta2.cidade);

    printf("Digite a população da carta 2: \n");
    scanf("%lu", &carta2.populacao);

    printf("Digite a área em km² da carta 2: \n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &carta2.pib);

    printf("Digite os pontos turísticos da carta 2: \n");
    scanf("%d", &carta2.pontos);


    // Exibindo os dados da segunda carta
    printf("=== Carta 2 ===\n");
    printf("Estado: %s - Código: %s\n", carta2.estado, carta2.codigo);
    printf("Cidade: %s - População: %lu\n", carta2.cidade, carta2.populacao);
    printf("Área em km²: %.2f - PIB: %.2f bilhões\n", carta2.area, carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos);

    carta2.pibpercapita = (carta2.pib * 1.0e9) / (float)carta2.populacao;
    printf("PIB per Capita: %.2f reais\n", carta2.pibpercapita);
    
    carta2.densidade = (float)carta2.populacao / carta2.area;
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);

    //calculo carta 2
    carta2.densidadeinversa = 1.0 / carta2.densidade;

    carta2.superpoder = (double)carta2.populacao + (double)carta2.area + (double)(carta2.pib * 1.0e9) + (double)carta2.pontos + (double)carta2.pibpercapita + carta2.densidadeinversa;

    printf("Densidade Iversa: %f\n", carta2.densidadeinversa);
    printf("Super Poder: %.2Lf\n", carta2.superpoder);

    //comparações

    printf("=== QUE RUFEM OS TAMBORES!!!===\n"); 
    printf("=====\n");
    printf("Hora do duelo, que a melhor carta vença!\n");
    printf("Regra: Resultado '1' Carta 1 vence, Resultado '0' Carta 2 vence.\n");

    
    printf("Comparação de população: %d\n", carta1.populacao > carta2.populacao);
    printf("Comparação de área em km2: %d\n", carta1.area > carta2.area);
    printf("Comparação do PIB: %d\n", carta1.pib > carta2.pib);
    printf("Comparação dos Pontos Turisticos: %d\n", carta1.pontos > carta2.pontos);
    printf("Comparação da Densidade Populacional: %d\n", carta1.densidade > carta2.densidade);
    printf("Comparação do PIB Per Capita: %d\n", carta1.pibpercapita > carta2.pibpercapita);
    printf("Comparação da Densidade Inversa: %d\n", carta1.densidadeinversa < carta2.densidadeinversa);
    printf("Comparação do Super Poder: %d\n", carta1.superpoder > carta2.superpoder);
    
    

    

    

    




    return 0;

}