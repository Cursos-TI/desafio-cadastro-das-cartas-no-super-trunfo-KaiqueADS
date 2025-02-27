//Desafio novato tema 1

#include <stdio.h>

int main (){

    //Carta 1    
    char estado1[3], codigo1[4], cidade1[20];
    int populacao1;
    int pontosturisticos1;
    float area1, pib1;

    //Carta 2
    char estado2[3], codigo2[4], cidade2[20];
    int populacao2;
    int pontosturisticos2;
    float area2, pib2;

    //entrada de dados carta 1
    printf ("cadastro da carta 1\n");
    printf ("digite uma letra de A a H:\n"); 
    scanf ("%s", estado1); 

    printf ("digite o codigo:\n"); 
    scanf ("%s", &codigo1); 

    printf ("digite a cidade:\n"); 
    scanf ("%s", &cidade1);

    printf ("digite a populacao da cidade:\n"); 
    scanf ("%d", &populacao1);

    printf ("digite os pontos turisticos:\n"); 
    scanf ("%d", &pontosturisticos1);

    printf ("area:\n"); 
    scanf ("%f", &area1);

    printf ("pib:\n"); 
    scanf ("%f", &pib1);


    //entrada de dados carta 2
    printf ("\nCadastro da carta 2\n");
    printf ("Digite uma letra de A a H:\n"); 
    scanf ("%s", &estado2); 

    printf ("Digite o codigo:\n"); 
    scanf ("%s", &codigo2); 

    printf ("Digite a cidade:\n"); 
    scanf ("%s", &cidade2);

    printf ("Digite a populacao da cidade:\n"); 
    scanf ("%d", &populacao2);

    printf ("Digite os pontos turisticos:\n"); 
    scanf ("%d", &pontosturisticos2);

    printf ("Area:\n"); 
    scanf ("%f", &area2);

    printf ("Pib:\n"); 
    scanf ("%f", &pib2);


    //exibição das cartas
    printf("\n----- DADOS DAS CARTAS -----");

    //carta 1

    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área(km²): %.2f km²\n", area1);
    printf("Pib: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);


     //carta 2

     printf("\nCarta 2\n");
     printf("Estado: %s\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População: %d\n", populacao2);
     printf("Área(km²): %.2f km²\n", area2);
     printf("Pib: %.2f bilhões de reais\n", pib2);
     printf("Pontos turísticos: %d\n", pontosturisticos2);

     return 0;

}