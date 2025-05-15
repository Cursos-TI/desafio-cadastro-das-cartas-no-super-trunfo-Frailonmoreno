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


// Entrada de dados da cidade 1
printf("Carta 1 \n");
printf("Digite o nome da cidade 1:  ");
scanf(" %[^\n]" , nome1);
printf("Digite o estado da cidade 1: ");
scanf(" %[^\n]" , estado1);
printf("Digite o código da cidade1: ");
scanf("%d" , &codigo1);
printf("Digite a população da cidade1: ");
scanf("%d" , &populacao1);
printf("Digite a área da cidade 1 em km² ");
scanf("%f" , &area1);
printf("Digite o PIB da cidade1 (em bilhõe): ");
scanf("%f" , &pib1);
printf("Digite o número de pontos turísticos da cidade 1: ");
scanf("%d" ,&pontos1 );
printf("\n");
// Entrada dedados da cidade 2
printf("Carta 2 \n");
printf("Digite o nome da cidade 2:  ");
scanf(" %[^\n]" , nome2);
printf("Digite o estado da cidade 2: ");
scanf(" %[^\n]" , estado2);
printf("Digite o código da cidade2: ");
scanf("%d" , &codigo2);
printf("Digite a população da cidade2: ");
scanf("%d" , &populacao2);
printf("Digite a área da cidade 2 em km² ");
scanf("%f" , &area2);
printf("Digite o PIB da cidade2 (em bilhõe): ");
scanf("%f" , &pib2);
printf("Digite o número de pontos turísticos da cidade 2: ");
scanf("%d" ,&pontos2);








   
    return 0;
}

