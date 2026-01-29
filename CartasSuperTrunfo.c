#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char cidade1[30], cidade2[30];
    char codigo1[3], codigo2[3];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturistico1, pturistico2;

  // Área para entrada e saída de dados
          printf("\n Dados da Carta 1 \n");
    printf("Digite a letra inicial do seu estado:");
    scanf("%c", &estado1);
    printf("Digite o nome da sua cidade:");
    scanf("%s", &cidade1);
    printf("Digite o código da sua carta:");
    scanf("%s", &codigo1);
    printf("Digite a quantidade de habitantes da sua cidade:");
    scanf("%d", &populacao1);
    printf("Digite a area da sua cidade:");
    scanf("%f", &area1);
    printf("Digite o PIB da sua cidade:");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da sua cidade:");
    scanf("%d", &pturistico1);

          printf("\n Dados da Carta 2 \n");
    printf("Digite a letra inicial do seu estado:");
    scanf(" %c", &estado2);
    printf("Digite o nome da sua cidade:");
    scanf("%s", &cidade2);
    printf("Digite o código da sua carta:");
    scanf("%s", &codigo2);
    printf("Digite a quantidade de habitantes da sua cidade:");
    scanf("%d", &populacao2);
    printf("Digite a area da sua cidade:");
    scanf("%f", &area2);
    printf("Digite o PIB da sua cidade:");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da sua cidade:");
    scanf("%d", &pturistico2);

    // Área para exibição dos dados da carta 1 e carta 2 no terminal
          printf("\n Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos  Turisticos: %int\n", pturistico1);

          printf("\n Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos  Turisticos: %int\n", pturistico2);



return 0;
} 
