#include <stdio.h>

int main() {

    // Declaração de variaveis cadastro das cartas.

    char Estado[2][2];
    char Codigo[2][4];
    char Cidade[2][50];
    unsigned long int Populacao[2];
    float Area[2];
    float PIB[2];
    int Pontos_turisticos[2];

    // Declaração de variaveis para o calculo de Densidade populacional e PIB per Capita.

    float Densidade_populacional[2];
    float PIB_per_Capita[2];

    // Coleta de informações da Carta 1.

    printf("Insira uma letra para representar o Estado da carta 1: \n");
    scanf("%s", Estado[0]);

    printf("Insira um código para representar a carta 1 (use a letra do Estado seguida de um número): \n");
    scanf("%s", Codigo[0]);

    printf("Insira o nome de uma cidade do Estado da carta 1: \n");
    scanf("%s", Cidade[0]);

    printf("Insira o número de habitantes da cidade (use números inteiros): \n");
    scanf("%lu", &Populacao[0]);

    printf("Insira a area (em km²) da cidade: \n");
    scanf("%f", &Area[0]);

    printf("Insira PIB da cidade: \n");
    scanf("%f", &PIB[0]);

    printf("Insira a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &Pontos_turisticos[0]);

    // Coleta de informações da Carta 2.

    printf("Insira uma letra para representar o Estado da carta 2: \n");
    scanf("%s", Estado[1]);

    printf("Insira um código para representar a carta 2 (use a letra que representa o Estado seguida de um número): \n");
    scanf("%s", Codigo[1]);

    printf("Insira o nome de uma cidade do Estado da carta 2: \n");
    scanf("%s", Cidade[1]);

    printf("Insira o número de habitantes da cidade (use numeros inteiros): \n");
    scanf("%lu", &Populacao[1]);

    printf("Insira a area (em km²) da cidade: \n");
    scanf("%f", &Area[1]);

    printf("Insira PIB da cidade: \n");
    scanf("%f", &PIB[1]);

    printf("Insira a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &Pontos_turisticos[1]);

    // Calculo da Densidade populacional e PIB per Capita da carta 1.

    Densidade_populacional[0] = Populacao[0] / Area[0];
    PIB_per_Capita[0] = PIB[0] / Populacao[0];
 
    // Calculo da Densidade populacional e PIB per Capita da carta 2.

    Densidade_populacional[1] = Populacao[1] / Area[1];
    PIB_per_Capita[1] = PIB[1] / Populacao[1];

    // Vai mostrar as informações cadastradas da carta 1.

    printf("Carta 1: \n");
    printf("Estado: %s \n", Estado[0]);
    printf("Código: %s \n", Codigo[0]);
    printf("Nome da cidade: %s \n", Cidade[0]);
    printf("População: %lu \n", Populacao[0]);
    printf("Área: %.2f km² \n", Area[0]);
    printf("PIB: %.2f \n", PIB[0]);
    printf("Número de pontos turísticos: %d \n", Pontos_turisticos[0]);

    // Vai mostrar as informações dos calculas da carta 1 (Densidade populacional e PIB per capita).

    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_populacional[0]);
    printf("PIB per Capita: %.2f reais \n", PIB_per_Capita[0]);

   // Vai mostrar as informações cadastradas da carta 2.

    printf("Carta 2: \n");
    printf("Estado: %s \n", Estado[1]);
    printf("Código: %s \n", Codigo[1]);
    printf("Nome da cidade: %s \n", Cidade[1]);
    printf("População: %lu \n", Populacao[1]);
    printf("Área: %.2f km² \n", Area[1]);
    printf("PIB: %.2f \n", PIB[1]);
    printf("Número de pontos turísticos: %d \n", Pontos_turisticos[1]);

    // Vai mostrar as informações dos calculas da carta 2 (Densidade populacional e PIB per capita).

    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_populacional[1]);
    printf("PIB per Capita: %.2f reais \n", PIB_per_Capita[1]);

    // Comparações entre os valores das cartas:

    printf("!!!CARTAS BATALHANDO!!! \n");
    printf("Resultado da batalha entre a Densidade populacional das Cartas: \n");

    // Escolhi a Densidade Populacional para a demonstração de comparações entre as cartas.
    // Na Densidade populacional o menor valor é que é o vencedor.

    printf("A densidade populacional da carta 1 é: %.2f \n", Densidade_populacional[0]);
    printf("A densidade populacional da carta 2 é: %.2f \n", Densidade_populacional[1]);

    if (Densidade_populacional[0] < Densidade_populacional[1]) {
        printf("A carta 1 venceu! \n");
    } else {
        printf("A carta 2 venceu! \n");
    }

    return 0;
}