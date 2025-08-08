#include <stdio.h>

int main(){

char estado[50], codigo[50], nome[50];
int pontosturisticos;
float populacao, densidade, area, pib;

//Cadastro da carta 1
    
    printf("Qual é o estado: \n");
    scanf("%s", estado);
    
    printf("Qual é o codigo: \n");
    scanf("%s", codigo);

    printf("Qual o Nome da Cidade: \n");
    scanf("%s", nome);

    printf("Qual a população: \n");
    scanf("%f", &populacao);

    printf("Qual é a area: \n");
    scanf("%f", &area);

    printf("Qual é o PIB: \n");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

// Cadastro da segunda carta .

char segundoestado[50], segundocodigo[50],segundonome[50];
int segundoponto;
float segundapopulacao, segundadensidade,segundaarea, segundopib;
 
    printf("Qual é o estado: \n");
    scanf("%s", segundoestado);
    
    printf("Qual é o codigo: \n");
    scanf("%s", segundocodigo);

    printf("Qual o Nome da Cidade: \n");
    scanf("%s", segundonome);

    printf("Qual a população: \n");
    scanf("%f", &segundapopulacao);

    printf("Qual é a area: \n");
    scanf("%f", &segundaarea);

    printf("Qual é o PIB: \n");
    scanf("%f", &segundopib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &segundoponto);

    //Visualização Da Carta 1
    printf("**** CARTA 1 ****");

    densidade = populacao / area;

    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %f \n",populacao);
    printf("Área: %.2f \n", area);  
    printf("PIB: %.2f bilhões de reais.\n", pib);
    printf("Pontos Turisticos: %d \n", pontosturisticos);
    printf("Densidade Populacional: %.2f \n", densidade);

    //Visualização Da Carta 2
    printf("**** CARTA 2 ****");

    segundadensidade = segundapopulacao / segundaarea;

    printf("Estado: %s \n", segundoestado);
    printf("Código: %s \n", segundocodigo);
    printf("Nome da Cidade: %s \n", segundonome);
    printf("População: %f \n",segundapopulacao);
    printf("Área: %.2f \n", segundaarea);  
    printf("PIB: %.2f bilhões de reais.\n", segundopib);
    printf("Pontos Turisticos: %d \n", segundoponto);
    printf("Densidade Populacional: %.2f \n", segundadensidade);

    return 0;
}