#include <stdio.h>

// Desafio Super Trunfo - Países
// última versão. Super Trunfo Nível Mestre Tema 3

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char cidade1[30], cidade2[30];
    char codigo1[3], codigo2[3];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturistico1, pturistico2;
    float dpopulacional1, dpopulacional2;
    float pibpercapita1, pibpercapita2;
    int Atributo1, Atributo2;
    float Superpoder1, Superpoder2; //Adicionamos Super Poder como atributo
    unsigned long int escolhaAtributo1, escolhaAtributo2; //Variável para as comparações

  // Área para entrada e saída de dados
          printf("\n Dados da Carta 1 \n");
    printf("Digite a letra inicial do seu estado:");
    scanf("%c", &estado1);
    printf("Digite o nome da sua cidade:");
    scanf("%s", &cidade1);
    printf("Digite o código da sua carta:");
    scanf("%s", &codigo1);
    printf("Digite a quantidade de habitantes da sua cidade:");
    scanf("%lu", &populacao1);
    printf("Digite a area da sua cidade:");
    scanf("%f", &area1);
    printf("Digite o PIB da sua cidade:");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da sua cidade:");
    scanf("%d", &pturistico1);

    //Área para cálculos da Carta 1
    dpopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    Superpoder1 = populacao1 + area1 + pturistico1 +
                     pib1 + pibpercapita1 + (1.0 / dpopulacional1);

          printf("\n Dados da Carta 2 \n");
    printf("Digite a letra inicial do seu estado:");
    scanf(" %c", &estado2);
    printf("Digite o nome da sua cidade:");
    scanf("%s", &cidade2);
    printf("Digite o código da sua carta:");
    scanf("%s", &codigo2);
    printf("Digite a quantidade de habitantes da sua cidade:");
    scanf("%lu", &populacao2);
    printf("Digite a area da sua cidade:");
    scanf("%f", &area2);
    printf("Digite o PIB da sua cidade:");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da sua cidade:");
    scanf("%d", &pturistico2);

    //Área para cálculos da Carta 2
    dpopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    Superpoder2 = populacao2 + area2 + pturistico2 +
                     pib2 + pibpercapita2 + (1.0 / dpopulacional2);

    // Área para exibição dos dados da carta 1 e carta 2 no terminal
          printf("\n Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos  Turisticos: %int\n", pturistico1);
    pintf("Densidade Populacional: %.2f hab/km²\n", dpopulacional1);
    pirntf("PIB per Capita: %.2fBilhões de Reais\n", pibpercapita1);
    printf("SuperPoder da carta 1: %.2f\n", Superpoder1);


          printf("\n Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos  Turisticos: %int\n", pturistico2);
    printf("Densidade Populacional: %.2f hab/km²", dpopulacional2);
    printf("PIB per Capita: %.2f Bilhões de Reais", pibpercapita2);
    printf("SuperPoder da carta 2: %.2f\n", Superpoder2);

    // Área para comparação das Cartas 1 e 2

        printf("\n Escolha o atributo para comparar \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. SuperPoder\n");
    printf("Digite o número do atributo escolhido: ");
    scanf("%lu", &escolhaAtributo1);

    printf("\nComparando %s (carta 1) x %s (carta 2)\n", cidade1, cidade2);

    switch (escolhaAtributo1) {
        case 1: // População
            printf("População: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área: %.2f vs %.2f\n", area1, area2);
            if (area1 > area2) printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB: %.2f vs %.2f\n", pib1, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Pontos Turísticos: %d vs %d\n", pturistico1, pturistico2);
            if (pturistico1 > pturistico2) printf("Vencedor: %s\n", cidade1);
            else if (pturistico2 > pturistico1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 5: // Densidade populacional (com a regra invertida)
            printf("Densidade: %.2f vs %.2f\n", dpopulacional1, dpopulacional2);
            if (dpopulacional1 < dpopulacional2) printf("Vencedor: %s\n", cidade1);
            else if (dpopulacional2 < dpopulacional1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 6: // PIB per capita
            printf("PIB per Capita: %.2f vs %.2f\n", pibpercapita1, pibpercapita2);
            if (pibpercapita1 > pibpercapita2) printf("Vencedor: %s\n", cidade1);
            else if (pibpercapita2 > pibpercapita1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 7: // SuperPoder
            printf("SuperPoder: %.2f vs %.2f\n", Superpoder1, Superpoder2);
            if (Superpoder1 > Superpoder2) printf("Vencedor: %s\n", cidade1);
            else if (Superpoder2 > Superpoder1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;

            // Segunda comparação das cartas
    
    printf("\n=== Escolha o segundo atributo para comparar (diferente do primeiro) ===\n");
    printf("\nComparando %s (carta 1) x %s (carta 2)\n", cidade1, cidade2);
    
     printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. SuperPoder\n");
    printf("Digite o número do atributo escolhido: ");
    scanf("%lu", &escolhaAtributo2);

    switch (escolhaAtributo2) {
        case 1: // População
            printf("População: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área: %.2f vs %.2f\n", area1, area2);
            if (area1 > area2) printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB: %.2f vs %.2f\n", pib1, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Pontos Turísticos: %d vs %d\n", pturistico1, pturistico2);
            if (pturistico1 > pturistico2) printf("Vencedor: %s\n", cidade1);
            else if (pturistico2 > pturistico1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 5: // Densidade populacional (com a regra invertida)
            printf("Densidade: %.2f vs %.2f\n", dpopulacional1, dpopulacional2);
            if (dpopulacional1 < dpopulacional2) printf("Vencedor: %s\n", cidade1);
            else if (dpopulacional2 < dpopulacional1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 6: // PIB per capita
            printf("PIB per Capita: %.2f vs %.2f\n", pibpercapita1, pibpercapita2);
            if (pibpercapita1 > pibpercapita2) printf("Vencedor: %s\n", cidade1);
            else if (pibpercapita2 > pibpercapita1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 7: // SuperPoder
            printf("SuperPoder: %.2f vs %.2f\n", Superpoder1, Superpoder2);
            if (Superpoder1 > Superpoder2) printf("Vencedor: %s\n", cidade1);
            else if (Superpoder2 > Superpoder1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
       
    printf("\n === soma dos atributos ===\n");
        // Terceira comparação - Soma dos atributos
    
        float soma1, soma2;
    
    soma1 = populacao1 + area1 + pturistico1 + pib1 + pibpercapita1 + (1.0 / dpopulacional1);
    printf("Soma dos atributos da carta 1: %.2lf\n", soma1);
    soma2 = populacao2 + area2 + pturistico2 + pib2 + pibpercapita2 + (1.0 / dpopulacional2);
    printf("Soma dos atributos da carta 2: %.2lf\n", soma2);
        
    if (soma1 > soma2 || soma2 > soma1)
    {   
        soma1 > soma2 ? printf("Carta 1 venceu com soma de atributos\n") : printf("Carta 2 venceu com soma de atributos\n");

    }else if (soma1 == soma2){
        
     printf("Empate na soma dos atributos\n");
        
    }else{
        
        printf("Erro na soma dos atributos\n");
        
    }
    
    //soma2 = populacao2 + area2 + pturistico2 + pib2 + pibpercapita2 + (1.0 / dpopulacional2);
     
    //printf("Soma dos atributos da carta 2: %.2f\n", soma);

    return 0;
  }