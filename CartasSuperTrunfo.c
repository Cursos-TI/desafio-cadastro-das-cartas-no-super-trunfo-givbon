#include <stdio.h>

int main(){
    //Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    
    //Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    //Entrada de dados
    printf("Super-Trunfo\n");
    
    printf("Cadastro da Carta 1: \n");

    //Estado
    printf("Estado: \n");
    scanf("%s", &estado1);

    //Código
    printf("Código da Carta (Ex: A01): \n");
    scanf("%s", &codigo1);

    //Cidade
    printf("Cidade: \n");
    scanf("%s", &nomeCidade1);

    //População
    printf("População: \n");
    scanf("%i", &populacao1);

    //Área
    printf("Área (em KM): \n");
    scanf("%i", &area1); 

    //PIB
    printf("PIB (bilhões de reais): \n");
    scanf("%i", &pib1);

    //N° de Pontos Turísticos
    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%i", &pontosTuristicos1); 

    printf("Cadastro da Carta 1 finalizado.\n");

    // CARTA 2
    printf("\nCadastro da Carta 2: \n");

    //Estado
    printf("Estado: \n");
    scanf("%s", &estado2);

    //Código
    printf("Código da Carta (Ex: A01): \n");
    scanf("%s", &codigo2);

    //Cidade
    printf("Cidade: \n");
    scanf("%s", &nomeCidade2);

    //População
    printf("População: \n");
    scanf("%i", &populacao2);

    //Área
    printf("Área (em KM): \n");
    scanf("%i", &area2); 

    //PIB
    printf("PIB (bilhões de reais): \n");
    scanf("%i", &pib2);

    //N° de Pontos Turísticos
    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%i", &pontosTuristicos2); 

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %i\n", populacao1);
    printf("Área em KM: %i\n", area1);
    printf("PIB (bilhões de reais): %d\n", pib1);
    printf("Pontos Túristicos: %i\n", pontosTuristicos1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %i\n", populacao2);
    printf("Área em KM: %i\n", area2);
    printf("PIB (bilhões de reais): %d\n", pib2);
    printf("Pontos Túristicos: %i\n", pontosTuristicos2);

    return 0;

}
