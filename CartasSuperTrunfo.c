#include <stdio.h>
int main() {

// Variáveis para cidade 
char nome1[50], estado1[30];
int codigo1, populacao1, pontos1;
float area1, pib1;

// Variáveis para cidade 2
char nome2[50], estado2[30];
int codigo2, populacao2, pontos2;
float area2, pib2;
float densidade1, densidade2;
float pibPerCapita1 , pibPerCapita2;
 float superPoder1, superPoder2;


// Entrada de dados da cidade 1
printf("*** SUPER TRUNFO *** \n ");
printf("\nCarta 1 \n");

printf("Digite o nome da cidade 1:  ");
scanf(" %[^\n]" , nome1);

printf("Digite o estado da cidade 1: ");
scanf(" %[^\n]" , estado1);

printf("Digite o código da cidade1: ");
scanf(" %d" , &codigo1);
getchar();

printf("Digite a população da cidade1: ");
scanf(" %d" , &populacao1);
getchar();

printf("Digite a área da cidade 1 em km² ");
scanf(" %f" , &area1);
getchar();

printf("Digite o PIB da cidade1 (em bilhõe): ");
scanf(" %f" , &pib1);
getchar();

printf("Digite o número de pontos turísticos da cidade 1: ");
getchar();
scanf(" %d" , &pontos1 );

printf(" \n \n");

// Cálculos cidade 1
densidade1 = populacao1 / area1;
pibPerCapita1 = (pib1 * 10000000000) / populacao1;


// Entrada dedados da cidade 2
printf("*** SUPER TRUNFO *** \n " );
printf("\nCarta 2 \n");

printf("Digite o nome da cidade 2:  ");
scanf(" %[^\n]" , nome2);

printf("Digite o estado da cidade 2: ");
scanf(" %[^\n]" , estado2);

printf("Digite o código da cidade2: ");
scanf(" %d" , &codigo2);
getchar();


printf("Digite a população da cidade2: ");
scanf(" %d" , &populacao2);
getchar();

printf("Digite a área da cidade 2 em km² ");
scanf(" %f" , &area2);

getchar();

printf("Digite o PIB da cidade2 (em bilhõe): ");
scanf(" %f" , &pib2);

getchar();

printf("Digite o número de pontos turísticos da cidade 2: ");
getchar();
scanf(" %d" , &pontos2);



// Cálculos cidade 2
densidade2 = populacao2 / area2;
pibPerCapita2 = (pib2 *10000000000) /populacao2;
superPoder1 = (float)populacao1 + area1 + (pib1 * 1e9) + pontos1 + pibPerCapita1 + (1.0 / densidade1);

// Resultados
printf("\n--- Resultados ---\n");
printf("Cidade1 - Densidade populacional :%.2f hab/km²\n" , densidade1);
printf("Cidade1 - PIB per capita: R$ %.2f\n" , pibPerCapita1  );
printf("Cidade 1 - Super Poder: %.2f\n", superPoder1);


printf("Cidade2 - Densidade populaciona2 :%.2f hab/km²\n" , densidade2);
printf("Cidade2 - PIB per capita: R$ %.2f\n" , pibPerCapita2  );
printf("Cidade 2 - Super Poder: %.2f\n", superPoder2);

 // Comparações
    printf("\nComparação de Cartas:\n\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos1 > pontos2 ? 1 : 2), (pontos1 > pontos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2), (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2 ? 1 : 2), (superPoder1 > superPoder2));

    return 0;




















   
    return 0;
}

