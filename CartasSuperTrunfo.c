#include <stdio.h>

int main(){

char estado[50], codigo[50], nome[50];
int pontosturisticos;
float percapita, densidade, area, pib, superpoder;
unsigned long int populacao;

//Cadastro da carta 1
    
    printf("Qual é o estado: \n");
    scanf("%s", estado);
    
    printf("Qual é o codigo: \n");
    scanf("%s", codigo);

    printf("Qual o Nome da Cidade: \n");
    scanf("%s", nome);

    printf("Qual a população: \n");
    scanf("%lu", &populacao);

    printf("Qual é a area: \n");
    scanf("%f", &area);

    printf("Qual é o PIB: \n");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

// Cadastro da segunda carta .

char segundoestado[50], segundocodigo[50],segundonome[50];
int segundoponto;
float percapita2, segundadensidade,segundaarea, segundopib, superpoder2;
unsigned long int segundapopulacao;
 
    printf("Qual é o estado: \n");
    scanf("%s", segundoestado);
    
    printf("Qual é o codigo: \n");
    scanf("%s", segundocodigo);

    printf("Qual o Nome da Cidade: \n");
    scanf("%s", segundonome);

    printf("Qual a população: \n");
    scanf("%lu", &segundapopulacao);

    printf("Qual é a area: \n");
    scanf("%f", &segundaarea);

    printf("Qual é o PIB: \n");
    scanf("%f", &segundopib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &segundoponto);

    //Visualização Da Carta 1
    printf("**** CARTA 1 ****\n");

    densidade = populacao / area;
    percapita = pib / populacao;

    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %lu habitantes.\n",populacao);
    printf("Área: %.2f km². \n", area);  
    printf("PIB: %.2f bilhões.\n", pib);
    printf("Pontos Turisticos: %d \n", pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km².\n", densidade);
    printf("PIB per Capita: %f reais. \n", percapita);

    superpoder = populacao + area + pib + percapita + densidade;
    printf("Super Poder de: %f\n", superpoder);

    //Visualização Da Carta 2
    printf("**** CARTA 2 ****\n");

    segundadensidade = segundapopulacao / segundaarea;
    percapita2 = segundopib / segundapopulacao;

    printf("Estado: %s \n", segundoestado);
    printf("Código: %s \n", segundocodigo);
    printf("Nome da Cidade: %s \n", segundonome);
    printf("População: %lu habitantes. \n",segundapopulacao);
    printf("Área: %.2f km². \n", segundaarea);  
    printf("PIB: %.2f bilhões.\n", segundopib);
    printf("Pontos Turisticos: %d \n", segundoponto);
    printf("Densidade Populacional: %.2f hab/km². \n", segundadensidade);
    printf("PIB per Capita: %f reais. \n", percapita2);

    superpoder2 = segundapopulacao + segundaarea + segundopib + percapita2 + segundadensidade;
    printf("Super Poder de: %f\n", superpoder2);

    // Comparação das cartas 

    printf("*** HORA DE VER QUEM GANHOU *** \n");

     if (populacao > segundapopulacao)
    {
        printf("Carta 1 ganhou!\n");
    }
    else
    {
        printf("carta 2 ganhou!\n");
    }
    if (area > segundaarea)
    {
        printf("Carta 1 ganhou!\n");
    }
    else
    {
        printf("carta 2 ganhou!\n");
    }
    if (pib > segundopib)
    {
        printf("Carta 1 ganhou!\n");
    }
    else
    {
        printf("carta 2 ganhou!\n");
    }
    if (pontosturisticos > segundoponto)
    {
        printf("Carta 1 ganhou!\n");
    }

    else
    {
        printf("carta 2 ganhou!\n");
    }
    if (densidade < segundadensidade)
    {
        printf("Carta 1 ganhou!\n");
    }
    else
    {
        printf("carta 2 ganhou!\n");
    }
    

    return 0;
}