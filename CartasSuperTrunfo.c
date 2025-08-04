#include <stdio.h>

int main(){

char estado[50], codigo[5], nome[50];
int populacao, pontosturisticos;
float area, pib;

//Cadastro da carta 1
    
    printf("Qual é o estado: \n");
    scanf("%s", estado);
    
    printf("Qual é o codigo: \n");
    scanf("%s", codigo);

    printf("Qual o Nome da Cidade: \n");
    scanf("%s", nome);

    printf("Qual a população: \n");
    scanf("%d", &populacao);

    printf("Qual é a area: \n");
    scanf("%f", &area);

    printf("Qual é o PIB: \n");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

// Cadastro da segunda carta .

char segundoestado[50], segundocodigo[5], segundonome[50];
int segundapopulacao, segundoponto;
float segundaarea, segundopib;
 
    printf("Qual é o estado: \n");
    scanf("%s", segundoestado);
    
    printf("Qual é o codigo: \n");
    scanf("%s", segundocodigo);

    printf("Qual o Nome da Cidade: \n");
    scanf("%s", segundonome);

    printf("Qual a população: \n");
    scanf("%d", &segundapopulacao);

    printf("Qual é a area: \n");
    scanf("%f", &segundaarea);

    printf("Qual é o PIB: \n");
    scanf("%f", &segundopib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &segundoponto);

//Visualização Da Carta 1

    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("Área: %f \n", area);  
    printf("PIB: %f bilhões de reais.\n", pib);
    printf("Pontos Turisticos: %d \n", pontosturisticos);

    //Visualização Da Carta 2

    printf("Estado: %s \n", segundoestado);
    printf("Código: %s \n", segundocodigo);
    printf("Nome da Cidade: %s \n", segundonome);
    printf("Área: %f \n", segundaarea);  
    printf("PIB: %f bilhões de reais.\n", segundopib);
    printf("Pontos Turisticos: %d \n", segundoponto);

    return 0;
}