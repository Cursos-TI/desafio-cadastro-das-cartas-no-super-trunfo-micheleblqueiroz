#include <stdio.h>

int main() {
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;  
    int pontos_turisticos1, pontos_turisticos2;
    // Added variables for density and GDP per capita
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    printf("Cadastro da primeira cidade:\n");
    printf("Codigo da cidade: ");
    scanf("%s", codigo1);

    printf("Nome: ");
    scanf(" %[^\n]s", nome1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1); 

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nCadastro da segunda cidade:\n");
    printf("Codigo da cidade: ");
    scanf("%s", codigo2);
    
    printf("Nome: ");
    scanf(" %[^\n]s", nome2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);  

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

  
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

   
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

   
    printf("\nPrimeira cidade cadastrada:\n");
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);  
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);  
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);


    printf("\nSegunda cidade cadastrada:\n");
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2); 
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);  
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    return 0;
}