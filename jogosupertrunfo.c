#include <stdio.h>

int main() {
    char codigo1[10], codigo2[10];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;  
    int pontos_turisticos1, pontos_turisticos2;

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

    printf("\nPrimeira cidade cadastrada:\n");
    printf("%s\n", codigo1);
    printf("%s\n", nome1);
    printf("%d\n", populacao1);  
    printf("%.2f\n", area1);
    printf("%.2f\n", pib1);  
    printf("%d\n", pontos_turisticos1);

    printf("\nSegunda cidade cadastrada:\n");
    printf("%s\n", codigo2);
    printf("%s\n", nome2);
    printf("%d\n", populacao2); 
    printf("%.2f\n", area2);
    printf("%.2f\n", pib2);  
    printf("%d\n", pontos_turisticos2);

    return 0;
}