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

    // Declaração da variavel do menu interativo.

    int opcao;

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

    // Menu interativo para o usuario escolher qual atributo comparar.

    printf("Escolha nas opções abaixo qual atributo das cartas entrará em combate: \n");
    printf("1. População. \n");
    printf("2. Área. \n");
    printf("3. PIB. \n");
    printf("4. Pontos turisticos. \n");
    printf("5. Densidade Populacional. \n");
    printf("6. PIB per Capita. \n");
    printf("Qual a sua escolha? \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (Populacao[0] > Populacao[1]) {
        printf("A carta 1 venceu! \n");
    } else if (Populacao[0] < Populacao[1]) {
        printf("A carta 2 venceu! \n");
    } else {
        printf("As cartas empataram! \n");
    }
        break;
    case 2:
        if (Area[0] > Area[1]) {
        printf("A carta 1 venceu! \n");
    } else if (Area[0] < Area[1]) {
        printf("A carta 2 venceu! \n");
    } else {
        printf("As cartas empataram! \n");
    }
        break;
    case 3:
        if (PIB[0] > PIB[1]) {
        printf("A carta 1 venceu! \n");
    } else if (PIB[0] < PIB[1]) {
        printf("A carta 2 venceu! \n");
    } else {
        printf("As cartas empataram! \n");
    }
        break;
    case 4:
        if (Pontos_turisticos[0] > Pontos_turisticos[1]) {
        printf("A carta 1 venceu! \n");
    } else if (Pontos_turisticos[0] < Pontos_turisticos[1]) {
        printf("A carta 2 venceu! \n");
    } else {
        printf("As cartas empataram! \n");
    }
        break;
    case 5:
        if (Densidade_populacional[0] < Densidade_populacional[1]) {
        printf("A carta 1 venceu! \n");
    } else if (Densidade_populacional[0] > Densidade_populacional[1]) {
        printf("A carta 2 venceu! \n");
    } else {
        printf("As cartas empataram! \n");
    }
        break;
    case 6:
        if (PIB_per_Capita[0] > PIB_per_Capita[1]) {
        printf("A carta 1 venceu! \n");
    } else if (PIB_per_Capita[0] < PIB_per_Capita[1]) {
        printf("A carta 2 venceu! \n");
    } else {
        printf("As cartas empataram! \n");
    }
        break;
    default:
        printf("Opção inválida! Tente novamente! \n");
        break;
    }

    // Exibição do resultado!!

    printf("Resultados: \n");
    printf("Cidades: %s e %s \n", Cidade[0], Cidade[1]);

    if (opcao == 1) {
    printf("Atributo comparado: População\n");
    printf("Carta 1: %lu habitantes\n", Populacao[0]);
    printf("Carta 2: %lu habitantes\n", Populacao[1]);
    if (Populacao[0] > Populacao[1]) {
        printf("A carta 1 venceu!\n");
    } else if (Populacao[0] < Populacao[1]) {
        printf("A carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

} else if (opcao == 2) {
    printf("Atributo comparado: Área\n");
    printf("Carta 1: %.2f km²\n", Area[0]);
    printf("Carta 2: %.2f km²\n", Area[1]);
    if (Area[0] > Area[1]) {
        printf("A carta 1 venceu!\n");
    } else if (Area[0] < Area[1]) {
        printf("A carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

} else if (opcao == 3) {
    printf("Atributo comparado: PIB\n");
    printf("Carta 1: %.2f\n", PIB[0]);
    printf("Carta 2: %.2f\n", PIB[1]);
    if (PIB[0] > PIB[1]) {
        printf("A carta 1 venceu!\n");
    } else if (PIB[0] < PIB[1]) {
        printf("A carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

} else if (opcao == 4) {
    printf("Atributo comparado: Pontos Turísticos\n");
    printf("Carta 1: %d pontos\n", Pontos_turisticos[0]);
    printf("Carta 2: %d pontos\n", Pontos_turisticos[1]);
    if (Pontos_turisticos[0] > Pontos_turisticos[1]) {
        printf("A carta 1 venceu!\n");
    } else if (Pontos_turisticos[0] < Pontos_turisticos[1]) {
        printf("A carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

} else if (opcao == 5) {
    printf("Atributo comparado: Densidade Populacional\n");
    printf("Carta 1: %.2f hab/km²\n", Densidade_populacional[0]);
    printf("Carta 2: %.2f hab/km²\n", Densidade_populacional[1]);
    if (Densidade_populacional[0] < Densidade_populacional[1]) {
        printf("A carta 1 venceu!\n");
    } else if (Densidade_populacional[0] > Densidade_populacional[1]) {
        printf("A carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

} else if (opcao == 6) {
    printf("Atributo comparado: PIB per Capita\n");
    printf("Carta 1: %.2f reais\n", PIB_per_Capita[0]);
    printf("Carta 2: %.2f reais\n", PIB_per_Capita[1]);
    if (PIB_per_Capita[0] > PIB_per_Capita[1]) {
        printf("A carta 1 venceu!\n");
    } else if (PIB_per_Capita[0] < PIB_per_Capita[1]) {
        printf("A carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    } }

    return 0;
}