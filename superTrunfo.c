/*
-----------------------
Programa desenvolvida na disciplina 'Introdução a programação de computadores'

Exercicio #1 - cadastrar e exibir duas cartas
-----------------------
dados: 
    Estado - char
    codigo da carta - char[]
    nome da cidade - char[]
    populacao - int
    area(km2) - float
    pib - float
    numeros de pontos turisticos - int

-----------------------
Autor: Jorge França
-----------------------
Data: 05 - Set - 2025
*/
#include <stdio.h> 

float densidadePop(unsigned long int populacao, float area){
    return populacao/area;
}

float pibPerCap(float pib, unsigned long int populacao){
    return (pib*1000000000)/populacao;

}
int main(){
    // declaracao das variaveis
    // carta #1
    char estado, estado2;
    char codigoCarta[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int qntPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    
    // carta #2
    // char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int qntPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    
    //input
    printf("--------------------------------------\n");
    printf("      SUPER TRUNFO        \n");
    printf("--------------------------------------\n");
    
    printf("Primeiro vamos cadastrar a carta #1!\n");

    printf("Digite um Estado (letra A-H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta (Exx.: A01): ");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Tamanho populacional: ");
    scanf("%lu", &populacao);

    printf("Digite a area (km2): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &qntPontosTuristicos);

    densidadePopulacional = densidadePop(populacao, area);
    pibPerCapita = pibPerCap(pib, populacao);
    float superPoder = populacao + area + pib + (1.0/densidadePopulacional);

    //input - carta #2
    printf("\n-------------------------------------------------------\n");
    printf("Agora vamos cadastrar a carta #2!\n");

    printf("Digite um Estado (letra A-H):");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (Exx.: A01): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Tamanho populacional: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &qntPontosTuristicos2);

    densidadePopulacional2 = densidadePop(populacao2, area2);
    pibPerCapita2 = pibPerCap(pib2, populacao2);
    float superPoder2 = populacao2 + area2 + pib2 + (1.0/densidadePopulacional2);

    // Rotina para mostrar carta na saida padrao
    printf("\n-------------------------------------------------------\n");
    printf("Carta #1: \n");
    printf("----------\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", qntPontosTuristicos);
    printf("Densidade populacional: %.2f hab/km2\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

    printf("\n-------------------------------------------------------\n");
    printf("Carta #2: \n");
    printf("----------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", qntPontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n-------------------------------------------------------\n");
    printf("            Combate: Carta #1 VERSUS Carta #2            \n");
    printf("---------------------------------------------------------\n");
    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Número de pontos turísticos: %d\n", qntPontosTuristicos > qntPontosTuristicos2);
    printf("Densidade populacional: %d\n", densidadePopulacional < densidadePopulacional2);
    printf("PIB per Capita: %d\n", pibPerCapita > pibPerCapita2);
    printf("Super poder: %d\n", superPoder > superPoder2);
    printf("---------------------------------------------------------\n");
    printf("Legenda:\n1 - Carta #1 Venceu!\n0 - Carta #2 Venceu!\n");
    printf("---------------------------------------------------------\n");

    return 0;
}