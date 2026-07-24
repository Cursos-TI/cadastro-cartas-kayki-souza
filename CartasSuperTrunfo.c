#include <stdio.h>

int main() {
//carta 1
    char estado1;
    char codigo1[3];
    char cidade1[10]; 
    int populacao1;
    float area1;
    float PIB1;
    int NPT1;
//carta 2
    char estado2;
    char codigo2[3];
    char cidade2[10]; 
    int populacao2;
    float area2;
    float PIB2;
    int NPT2;

//inicio do jogo
    printf("----INICIO DO JOGO----\n\n");

//dados da primeira carta
    printf("DADOS DA PRIMEIRA CARTA:\n\n");

    printf("Digite uma letra pra representar o estado1: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta1: ");
    scanf("%s", &codigo1);
    printf("DIgite o nome para representar a cidade1: ");
    scanf("%s", &cidade1);
    printf("Digite o numero da populacao da cidade1: ");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade1: ");
    scanf("%f", &area1);
    printf("Digite o NPT da cidade1: ");
    scanf("%f", &NPT1);
    printf("AGUARDE...\n\n");


//dados da segunda carta
    printf("DADOS DA SEGUNDA CARTA:\n\n");

    printf("Digite uma letra pra representar o estado2: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta2: ");
    scanf("%s", &codigo2);
    printf("DIgite o nome para representar a cidade2: ");
    scanf("%s", &cidade2);
    printf("Digite o numero da populacao da cidade2: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade2: ");
    scanf("%f", &area2);
    printf("Digite o NPT da cidade2: ");
    scanf("%f", &NPT2);
    

    printf("FIM DE JOGO");

    return 0;

}
