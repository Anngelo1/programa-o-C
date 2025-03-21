#include <stdio.h>

int main(){
    char estado1 [50], estado2[50]; // Letra inicial do estado ex: A,B,C,H
    char CodigodaCidade1[50], CodigodaCidade2[50]; // Codigo da cidade seguido de um numero ex: 01, 02, 03 
    char Cidade1[50], Cidade2[50]; // Nome da cidade
    int Populacao1, Populacao2; // População da cidade
    float Area1, Area2; // Área em km²
    float PIB1, PIB2; // Produto interno bruto da cidade
    int PontosTuristicos1, PontosTuristicos2; // Quantidade de pontos turisticos da cidade
    float DensidadePopulacional1, DensidadePopulacional2; // Representa o número de habitantes por quilômetro quadrado
    float PibPerCapita1, PibPerCapita2; // Indica a riqueza média por pessoa na cidade
    float SuperPoder1, SuperPoder2; // é a soma de todas as caracteristicas da carta
    int atributoEscolhido;



    // Carta 1
    printf("Digite a Sigla do estado: ");
    scanf("%s", estado1);

    printf("Código da carta (Ex: 01, 02): \n"); 
    scanf("%s", CodigodaCidade1);

    printf("Nome da cidade (Sem espaços): \n");
    scanf("%s", Cidade1);

    printf("População da cidade: \n");
    scanf("%d", &Populacao1);

    printf("Área da cidade em km²: \n");
    scanf("%f", &Area1);

    printf("PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Quantidade de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos1);
    

    printf("Código da Cidade: %s \n", CodigodaCidade1);
    printf("Nome da Cidade: %s \n", Cidade1);
    printf("População da cidade: %d \n", Populacao1);
    printf("Área da cidade em km²: %f \n", Area1);
    printf("PIB da cidade: %f \n", PIB1);
    printf("Quantidade de Pontos Turisticos: %d \n", PontosTuristicos1);

    DensidadePopulacional1 = (float) Populacao1 / Area1;

    printf("Densidade Populacional: %f\n", DensidadePopulacional1);

    PibPerCapita1 = (float) PIB1 / Populacao1;

    printf("Pib Per Capita: %f\n", PibPerCapita1);

    SuperPoder1 = (float) Populacao1 + Area1 + PIB1 +PontosTuristicos1;

    printf("Super Poder: %f\n", SuperPoder1);
    printf("\n_______________________________________\n");

    // Carta 2
    printf("Digite a Sigla do estado: ");
    scanf("%s", estado2);

    printf("Código da carta (Ex: A01, A02): \n"); 
    scanf("%s", CodigodaCidade2);

    printf("Nome da cidade (Sem espaços): \n");
    scanf("%s", Cidade2);

    printf("População da cidade: \n");
    scanf("%d", &Populacao2);

    printf("Área da cidade em km²: \n");
    scanf("%f", &Area2);

    printf("PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Quantidade de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos2);
    
    
    printf("Código da Carta: %s \n", CodigodaCidade2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("População da cidade: %d \n", Populacao2);
    printf("Área da cidade em km²: %f \n", Area2);
    printf("PIB da cidade: %f \n", PIB2);
    printf("Quantidade de Pontos Turisticos: %d \n", PontosTuristicos2);

    DensidadePopulacional2 = (float) Populacao2 / Area2;

    printf("Densidade Populacional: %f\n", DensidadePopulacional2);

    PibPerCapita2 = (float) PIB2 / Populacao2;

    printf("Pib Per Capita: %f\n", PibPerCapita2);

    SuperPoder2 = (float) Populacao2 + Area2 + PIB2 +PontosTuristicos2;

    printf("Super Poder: %f\n", SuperPoder2);
    
    printf("\n_______________________________________\n");

   // COMPARAÇÃO DE ATRIBUTOS
   //printf("Comparação das Cartas\n");
   //printf("Carta 1: 2 --- Carta 2: 2 \n");
   //printf("População: %d\n", (Populacao1 > Populacao2) ? 1 : 2);
   //printf("Área: %d\n", (Area1 > Area2) ? 1 : 2);
   //printf("PIB: %d\n", (PIB1 > PIB2) ? 1 : 2);
   //printf("Quantidade de Pontos Turisticos: %d\n", (PontosTuristicos1 > PontosTuristicos2) ? 1 : 2);
   //printf("Densidade Populacional: %d (vence a menor)\n", (DensidadePopulacional1 < DensidadePopulacional2) ? 1 : 2);
   //printf("Pib per capita: %d\n", (PibPerCapita1 > PibPerCapita2)  ? 1 : 2);
   //printf("Super Poder: %d\n", (SuperPoder1 > SuperPoder2)  ? 1 : 2);


   
    // COMPARAÇÃO DE ATRIBUTOS
    //printf("ESCOLHA UM ATRIBUTO\n");
    //printf("1. População1\n");
    //printf("2. Área1\n");
   // printf("3. PIB1\n");
    //printf("4. Pontos Turisticos1\n");
   // printf("5. Densidade Populacional1\n");
   // printf("6. Pib Per Capita1\n");
   // printf("7. Super Poder1\n");
   // printf("Escolha um atributo1\n:");
   // printf("8. População2\n");
   // printf("9. Área2\n");
   // printf("10. PIB2\n");
    //printf("11. Pontos Turisticos2\n");
   // printf("12. Densidade Populacional2\n");
   // printf("13. Pib Per Capita2\n");
   // printf("14. Super Poder2\n");
   // scanf("%d", &atributoEscolhido);


    //switch (atributoEscolhido)
   // {
   // case 1:
   // if (Populacao1 > Populacao2) {
   //     printf("População vencedora:\n População 1: %d Habitantes", Populacao1);
   // } else if (Populacao2 > Populacao1) {
   //     printf("População vencedora:\n População 2: %d Habitantes", Populacao2);
   // } else {
   //     printf("Empate! Ambas as populações têm %d Habitantes", Populacao1);
  //  }
   // break;
  //  case 2:
   // if (Area1 > Area2) {
  //      printf("Área vencedora:\nÁrea 1 com %f km²\n", Area1);
  //  } else if (Area2 > Area1) {
 //      printf("Área vencedora:\nÁrea 2 com %f km²\n", Area2);
  //  } else {
  //      printf("Empate! Ambas as áreas têm %f km²\n", Area1);
  //  }
  //  break;
    

    printf("Menu de BATALHA\n");
    printf("1. População1\n");
    printf("2. Área1\n");
    printf("3. PIB1\n");
    printf("4. Pontos Turisticos1\n");
    printf("5. Densidade Populacional1\n");
    printf("6. Pib Per Capita1\n");
    printf("7. Super Poder1\n");
    printf("8. População2\n");
    printf("9. Área2\n");
    printf("10. PIB2\n");
    printf("11. Pontos Turisticos2\n");
    printf("12. Densidade Populacional2\n");
    printf("13. Pib Per Capita2\n");
    printf("14. Super Poder2\n");
    printf("###   Escolha um atributo:   ### \n");
    scanf("%d", &atributoEscolhido);

    switch (atributoEscolhido)
    {
    case 1:
        printf("_______________\n");
        printf("VOCÊ ESCOLHEU A POPULAÇÃO 1\n");
        Populacao1 > Populacao2 ? printf("* População 1 venceu *\n") : printf("* População 2 venceu *\n");
        printf("População 1: %d Habitantes\n", Populacao1);
        printf("População 2: %d Habitantes\n", Populacao2);
        break;
    case 2:
        printf("VOCÊ ESCOLHEU A ÁREA 1\n");
        Area1 > Area2 ? printf("* Área 1 venceu *\n") : printf(" *Área 2 venceu *\n");
        printf("Área 1: %f km²\n", Area1);
        printf("Área 2: %f km²\n", Area2);
        break;
    case 3:
        printf("VOCÊ ESCOLHEU O PIB 1\n");
        PIB1 > PIB2 ? printf("* PIB 1 venceu *\n") : printf("PIB 2 venceu\n");
        printf("PIB 1: %f\n", PIB1);
        printf("PIB 2: %f\n", PIB2);
        break;
    case 4:
        printf("VOCÊ ESCOLHEU OS PONTOS TURISTICOS 1\n");
        PontosTuristicos1 > PontosTuristicos2 ? printf("* Pontos Turisticos 1 venceu *\n") : printf("* Pontos Turisticos 2 venceu *\n");
        printf("Pontos Turisticos 1: %d\n", PontosTuristicos1);
        printf("Pontos Turisticos 2: %d\n", PontosTuristicos2);
        break;
    case 5:
        printf("VOCÊ ESCOLHEU A DENSIDADE POPULACIONAL 1\n");
        DensidadePopulacional1 < DensidadePopulacional2 ? printf("* Densidade Populacional 1 venceu *\n") : printf("* Densidade Populacional 2 venceu *\n");
        printf("Densidade Populacional 1: %f\n", DensidadePopulacional1);
        printf("Densidade Populacional 2: %f\n", DensidadePopulacional2);
        break;
    case 6:
        printf("VOCÊ ESCOLHEU O PIB PER CAPITA 1\n");
        PibPerCapita1 > PibPerCapita2 ? printf("* Pib Per Capita 1 venceu *\n") : printf("* Pib Per Capita 2 venceu *\n");
        printf("Pib Per Capita 1: %f\n", PibPerCapita1);
        printf("Pib Per Capita 2: %f\n", PibPerCapita2);
        break;
    case 7:
        printf("VOCÊ ESCOLHEU O SUPER PODER 1\n");
        SuperPoder1 > SuperPoder2 ? printf("* Super Poder 1 venceu *\n") : printf("* Super Poder 2 venceu *\n");
        printf("Super Poder 1: %f\n", SuperPoder1);
        printf("Super Poder 2: %f\n", SuperPoder2);
        break;
    case 8:
        printf("VOCÊ ESCOLHEU A POPULAÇÃO 2\n");
        Populacao2 > Populacao1 ? printf("* População 2 venceu *\n") : printf("* População 1 venceu *\n");
        printf("População 2: %d Habitantes\n", Populacao2);
        printf("População 1: %d Habitantes\n", Populacao1);
        break;
    case 9:
        printf("VOCÊ ESCOLHEU A ÁREA 2\n");
        Area2 > Area1 ? printf("* Área 2 venceu *\n") : printf("* Área 1 venceu *\n");
        printf("Área 2: %f km²\n", Area2);
        printf("Área 1: %f km²\n", Area1);
        break;
    case 10:
        printf("VOCÊ ESCOLHEU O PIB 2\n");
        PIB2 > PIB1 ? printf("* PIB 2 venceu *\n") : printf("* PIB 1 venceu *\n");
        printf("PIB 2: %f\n", PIB2);
        printf("PIB 1: %f\n", PIB1);
        break;
    case 11:
        printf("VOCÊ ESCOLHEU OS PONTOS TURISTICOS 2\n");
        PontosTuristicos2 > PontosTuristicos1 ? printf("* Pontos Turisticos 2 venceu *\n") : printf("* Pontos Turisticos 1 venceu *\n");
        printf("Pontos Turisticos 2: %d\n", PontosTuristicos2);
        printf("Pontos Turisticos 1: %d\n", PontosTuristicos1);
        break;
    case 12:
        printf("VOCÊ ESCOLHEU A DENSIDADE POPULACIONAL 2\n");
        DensidadePopulacional2 < DensidadePopulacional1 ? printf("* Densidade Populacional 2 venceu *\n") : printf("* Densidade Populacional 1 venceu *\n");
        printf("Densidade Populacional 2: %f\n", DensidadePopulacional2);
        printf("Densidade Populacional 1: %f\n", DensidadePopulacional1);
        break;
    case 13:
        printf("VOCÊ ESCOLHEU O PIB PER CAPITA 2\n");
        PibPerCapita2 > PibPerCapita1 ? printf("* Pib Per Capita 2 venceu *\n") : printf("* Pib Per Capita 1 venceu *\n");
        printf("Pib Per Capita: %f\n", PibPerCapita2);
        printf("Pib Per Capita: %f\n", PibPerCapita1);
        break;
    case 14:
        printf("VOCÊ ESCOLHEU O SUPER PODER 2\n");
        SuperPoder2 > SuperPoder1 ? printf("* Super Poder 2 venceu *\n") : printf("* Super Poder 1 venceu *\n");
        printf("Super Poder 2: %f\n", SuperPoder2);
        printf("Super Poder 1: %f\n", SuperPoder1);
        break;
    default:
        printf("Opção inválida\n");
        break;
    }










    return 0;

























}