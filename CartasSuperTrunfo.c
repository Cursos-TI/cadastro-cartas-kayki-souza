#include <stdio.h>

int main() {
//carta 1
    char estado1;
    char codigo1[4];
    char cidade1[15]; 
    int populacao1;
    float area1;
    float PIB1;
    int NPT1;
    float densidadepopulacional1;
    float pibpercapita1;
//carta 2
    char estado2;
    char codigo2[4];
    char cidade2[15]; 
    int populacao2;
    float area2;
    float PIB2;
    int NPT2;
    float densidadepopulacional2;
    float pibpercapita2;

    //inicio do jogo
            printf("----INICIO DO JOGO----\n\n");

    //dados da primeira carta
            printf("DADOS DA PRIMEIRA CARTA:\n\n");

    printf("Digite uma letra para representar o estado1: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta1: ");
    scanf("%s", &codigo1);
    printf("DIgite o nome para representar a cidade1: ");
    scanf("%s", &cidade1);
    printf("Digite o numero da populacao da cidade1: ");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade1: ");
    scanf("%f", &PIB1);    
    printf("Digite o NPT da cidade1: ");
    scanf("%d", &NPT1);

    printf("AGUARDE...\n\n");

    //dados da segunda carta
            printf("DADOS DA SEGUNDA CARTA:\n\n");

    printf("Digite uma letra para representar o estado2: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta2: ");
    scanf("%s", &codigo2);
    printf("DIgite o nome para representar a cidade2: ");
    scanf("%s", &cidade2);
    printf("Digite o numero da populacao da cidade2: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade2: ");
    scanf("%f", &PIB2);
    printf("Digite o NPT da cidade2: ");
    scanf("%d", &NPT2);

    //informaçoes das cartas 1 e 2
            printf("---INFORMACOES DA CARTA1---\n\n");

    printf("estado1: %c\n", estado1);
    printf("codigo1: %s\n", codigo1);
    printf("cidade1: %s\n", cidade1);
    printf("populacao1: %d\n", populacao1);
    printf("area1: %.2f\n", area1);
    printf("PIB1: %.2f\n", PIB1);  
    printf("NPT1: %d\n", NPT1);
    densidadepopulacional1 = populacao1 / area1;
    printf("densidade populacional da carta1: %.2f\n", densidadepopulacional1);
    pibpercapita1 = PIB1 / populacao1;
    printf("pib per capita da carta1: %.2f\n", pibpercapita1);

            printf("---INFORMACOES DA CARTA2---\n\n");

    printf("estado2: %c\n", estado2);
    printf("codigo2: %s\n", codigo2);
    printf("cidade2: %s\n", cidade2);
    printf("populacao2: %d\n", populacao2);
    printf("area2: %.2f\n", area2);
    printf("PIB2: %.2f\n", PIB2);  
    printf("NPT2: %d\n", NPT2);
    densidadepopulacional2 = populacao2 / area2;
    printf("densidade populacional da carta2: %.2f\n", densidadepopulacional2);
    pibpercapita2 = PIB2 / populacao2;
    printf("pib per capita da carta2: %.2f\n", pibpercapita2);


    printf("FIM DE JOGO");

    return 0;

}
