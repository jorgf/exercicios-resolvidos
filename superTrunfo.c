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
#include <stdio.h>  // inlcusao da biblioteca stdio -> funcao printf()

int main(){         // funcao principal, indica inicio do programa
    // declaracao das variaveis
    // carta #1
    char estado, estado2;
    char codigoCarta[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int qntPontosTuristicos;
    
    // carta #2
    // char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int qntPontosTuristicos2;
    
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
    scanf("%d", &populacao);

    printf("Digite a area (km2): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &qntPontosTuristicos);

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
    scanf("%d", &populacao2);

    printf("Digite a area (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &qntPontosTuristicos2);

    // Rotina para mostrar carta na saida padrao
    printf("\n-------------------------------------------------------\n");
    printf("Carta #1: \n");
    printf("----------\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", qntPontosTuristicos);
    
    printf("\n-------------------------------------------------------\n");
    printf("Carta #2: \n");
    printf("----------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", qntPontosTuristicos2);

    return 0;       //indica o retorno da funcao main, nesse caso um inteiro com valor zero
}