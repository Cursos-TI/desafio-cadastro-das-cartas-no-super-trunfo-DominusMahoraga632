#include <stdio.h>




int main() {
   // Carta 1
   char codigo1[4], nome1[50], estado1;
   int populacao1, pontos1;
   float area1, pib1;
    
   // Carta 2
   char codigo2[4], nome2[50], estado2;
   int populacao2, pontos2;
   float area2, pib2;


   // --- Carta 1 ---
   printf("Digite o nome do estado (Uma letra de A a H):");
   scanf(" %c", &estado1);

   printf("Digite o codigo da carta usando a primeira letra do estado(ex: A01, B02):");
   scanf(" %s", codigo1);

   printf("Nome da cidade:");
   scanf(" %[^\n]", nome1);

   printf("Digite a população da cidade:");
   scanf(" %d", &populacao1);

   printf("Digite área da cidade (em KM²):" );
   scanf(" %f", &area1);

   printf("PIB da cidade:");
   scanf(" %f", &pib1);

   printf("Pontos Turísticos:");
   scanf(" %d", &pontos1);

   // --- Carta 2 ---
   printf("Digite o nome do estado (Uma letra de A a H):");
   scanf(" %c", &estado2);

   printf("Digite o codigo da carta usando a primeira letra do estado(ex: A01, B02):");
   scanf(" %s", codigo2);

   printf("Nome da cidade:");
   scanf(" %[^\n]", nome2);

   printf("Digite a população da cidade:");
   scanf(" %d", &populacao2);

   printf("Digite área da cidade (em KM²):" );
   scanf(" %f", &area2);

   printf("PIB da cidade:");
   scanf(" %f", &pib2);

   printf("Pontos Turísticos:");
   scanf(" %d", &pontos2);
   
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);


    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);






    return 0;
}
