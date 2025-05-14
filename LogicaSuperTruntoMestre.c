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

    // Declaração das variaveis dos menus interativos.

    int Ataque1;
    int Ataque2;
    char* Resultado[2];

    // Declaração de variaveis para a soma dos atributos escolhidos.

    float SomaCarta1 = 0, SomaCarta2 = 0;

    // Iniciando o jogo e instruções para o úsuario.

    printf("Iniciando o jogo... \n");
    printf("--------------------------------------\n");
    printf("Por favor, insira as informações das cartas com cuidado.\n");
    printf("--------------------------------------\n");
    printf("Insira as informações da carta 1: \n");

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

    // Calculo da Densidade populacional e PIB per Capita da carta 1.

    Densidade_populacional[0] = Populacao[0] / Area[0];
    PIB_per_Capita[0] = PIB[0] / Populacao[0];

    // Para dar espaçamento e melhorar o entedimento/leitura.

    printf("--------------------------------------\n");

    // Coleta de informações da Carta 2.

    printf("Insira as informações da carta 2: \n");

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
 
    // Calculo da Densidade populacional e PIB per Capita da carta 2.

    Densidade_populacional[1] = Populacao[1] / Area[1];
    PIB_per_Capita[1] = PIB[1] / Populacao[1];

    // Para dar espaçamento e melhorar o entedimento/leitura.

    printf("--------------------------------------\n");

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

    // Para dar espaçamento e melhorar o entedimento/leitura.

    printf("--------------------------------------\n");

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

    // Para dar espaçamento e melhorar o entedimento/leitura.

    printf("--------------------------------------\n");

    // Instruções para o uso dos menus interativos.

    printf("É a hora de escolher dois atributos das cartas para batalhar. \n");
    printf("Atenção!! Não pode escolher o mesmo atributo duas vezes seguidas!!  \n");

    // Para dar espaçamento e melhorar o entedimento/leitura.

    printf("--------------------------------------\n");

    // Menu interativo para o usuario escolher o primeiro atributo para comparar.

    printf("Escolha nas opções abaixo qual o primeiro atributo das cartas entrará em combate: \n");
    printf("1. População. \n");
    printf("2. Área. \n");
    printf("3. PIB. \n");
    printf("4. Pontos turisticos. \n");
    printf("5. Densidade Populacional. \n");
    printf("6. PIB per Capita. \n");
    printf("Qual a sua escolha? \n");
    scanf("%d", &Ataque1);

    switch (Ataque1)
    {
    case 1:
        Resultado[0] = (Populacao[0] > Populacao[1]) ? "Carta 1 venceu nesse atributo!" : "Carta 2 venceu nesse atributo!";
        break;
    case 2:
        Resultado[0] = (Area[0] > Area[1]) ? "Carta 1 venceu nesse atributo!" : "Carta 2 venceu nesse atributo!";
        break;
    case 3:
        Resultado[0] = (PIB[0] > PIB[1]) ? "Carta 1 venceu nesse atributo!" : "Carta 2 venceu nesse atributo!";
        break;
    case 4:
        Resultado[0] = (Pontos_turisticos[0] > Pontos_turisticos[1]) ? "Carta 1 venceu nesse atributo!" : "Carta 2 venceu nesse atributo!";
        break;
    case 5:
        Resultado[0] = (Densidade_populacional[0] < Densidade_populacional[1]) ? "Carta 1 venceu nesse atributo!" : "Carta 2 venceu nesse atributo!";
        break;
    case 6:
        Resultado[0] = (PIB_per_Capita[0] > PIB_per_Capita[1]) ? "Carta 1 venceu nesse atributo!" : "Carta 2 venceu nesse atributo!";
        break;
    default:
        printf("Opção inválida! Tente novamente! \n");
        break;
    }

    // Para dar espaçamento e melhorar o entedimento/leitura.

    printf("--------------------------------------\n");

    // Menu interativo para o usuario escolher o segundo atributo para comparar.

    printf("Escolha nas opções abaixo qual o segundo atributo das cartas entrará em combate: \n");
    printf("1. População. \n");
    printf("2. Área. \n");
    printf("3. PIB. \n");
    printf("4. Pontos turisticos. \n");
    printf("5. Densidade Populacional. \n");
    printf("6. PIB per Capita. \n");
    printf("Qual a sua escolha? \n");
    scanf("%d", &Ataque2);

    switch (Ataque2)
    {
    case 1:
        Resultado[1] = (Populacao[0] > Populacao[1]) ? "Carta 1 venceu nesse atributo!" : "Carta 2 venceu nesse atributo!";
        break;
    case 2:
        Resultado[1] = (Area[0] > Area[1]) ? "Carta 1 venceu nesse atributo!" : "Carta 2 venceu nesse atributo!";
        break;
    case 3:
        Resultado[1] = (PIB[0] > PIB[1]) ? "Carta 1 venceu nesse atributo!" : "Carta 2 venceu nesse atributo!";
        break;
    case 4:
        Resultado[1] = (Pontos_turisticos[0] > Pontos_turisticos[1]) ? "Carta 1 venceu nesse atributo!" : "Carta 2 venceu nesse atributo!";
        break;
    case 5:
        Resultado[1] = (Densidade_populacional[0] < Densidade_populacional[1]) ? "Carta 1 venceu nesse atributo!" : "Carta 2 venceu nesse atributo!";
        break;
    case 6:
        Resultado[1] = (PIB_per_Capita[0] > PIB_per_Capita[1]) ? "Carta 1 venceu nesse atributo!" : "Carta 2 venceu nesse atributo!";
        break;
    default:
        printf("Opção inválida! Tente novamente! \n");
        break;
    }

    // Para dar espaçamento e melhorar o entedimento/leitura.

    printf("--------------------------------------\n");

    // Código para caso o usuario escolha a mesma opção nos dois menus.

    if (Ataque1 == Ataque2) {
    printf("Os atributos são iguais, escolha novamente!\n");
} else {
    printf("!!!Cartas batalhando!!!\n");
}

    // Para dar espaçamento e melhorar o entedimento/leitura.

    printf("--------------------------------------\n");

    // Exibição do resultado!!

    printf("Resultados: \n");
    printf("Cidades: %s e %s \n", Cidade[0], Cidade[1]);

    // Exibição do resultado com base na escolha no primeiro menu.

    if (Ataque1 == 1) {
    printf("Atributo comparado: População\n");
    printf("Carta 1: %lu habitantes\n", Populacao[0]);
    printf("Carta 2: %lu habitantes\n", Populacao[1]);
    printf("%s \n", Resultado[0]);
    } else if (Populacao[0] == Populacao[1] ){ 
        printf("As cartas empataram!\n");
    }

    if (Ataque1 == 2) {
    printf("Atributo comparado: Área\n");
    printf("Carta 1: %.2f km²\n", Area[0]);
    printf("Carta 2: %.2f km²\n", Area[1]);
    printf("%s \n", Resultado[0]); }
     else if (Area[0] == Area[1]) {
        printf("As cartas empataram!\n");
    }

    if (Ataque1 == 3) {
    printf("Atributo comparado: PIB\n");
    printf("Carta 1: %.2f\n", PIB[0]);
    printf("Carta 2: %.2f\n", PIB[1]);
    printf("%s \n", Resultado[0]); }
    else if (PIB[0] == PIB[1]) {
        printf("As cartas empataram!\n");
    }

    if (Ataque1 == 4) {
    printf("Atributo comparado: Pontos Turísticos\n");
    printf("Carta 1: %d pontos\n", Pontos_turisticos[0]);
    printf("Carta 2: %d pontos\n", Pontos_turisticos[1]);
    printf("%s \n", Resultado[0]); }
    else if (Pontos_turisticos[0] == Pontos_turisticos[1]) {
        printf("As cartas empataram!\n");
    }

    if (Ataque1 == 5) {
    printf("Atributo comparado: Densidade Populacional\n");
    printf("Carta 1: %.2f hab/km²\n", Densidade_populacional[0]);
    printf("Carta 2: %.2f hab/km²\n", Densidade_populacional[1]);
    printf("%s \n", Resultado[0]); }
    else if (Densidade_populacional[0] == Densidade_populacional[1]) {
        printf("As cartas empataram!\n");
    }

    if (Ataque1 == 6) {
    printf("Atributo comparado: PIB per Capita\n");
    printf("Carta 1: %.2f reais\n", PIB_per_Capita[0]);
    printf("Carta 2: %.2f reais\n", PIB_per_Capita[1]);
    printf("%s \n", Resultado[0]); }
    else if (PIB_per_Capita[0] == PIB_per_Capita[1]) {
        printf("As cartas empataram!\n");
    }

    // Exibição do resultado com base na escolha no segundo menu.

    if (Ataque2 == 1) {
    printf("Atributo comparado: População\n");
    printf("Carta 1: %lu habitantes\n", Populacao[0]);
    printf("Carta 2: %lu habitantes\n", Populacao[1]);
    printf("%s \n", Resultado[1]);
    } else if (Populacao[0] == Populacao[1] ){ 
        printf("As cartas empataram!\n");
    }

    if (Ataque2 == 2) {
    printf("Atributo comparado: Área\n");
    printf("Carta 1: %.2f km²\n", Area[0]);
    printf("Carta 2: %.2f km²\n", Area[1]);
    printf("%s \n", Resultado[1]); }
     else if (Area[0] == Area[1]) {
        printf("As cartas empataram!\n");
    }

    if (Ataque2 == 3) {
    printf("Atributo comparado: PIB\n");
    printf("Carta 1: %.2f\n", PIB[0]);
    printf("Carta 2: %.2f\n", PIB[1]);
    printf("%s \n", Resultado[1]); }
    else if (PIB[0] == PIB[1]) {
        printf("As cartas empataram!\n");
    }

    if (Ataque2 == 4) {
    printf("Atributo comparado: Pontos Turísticos\n");
    printf("Carta 1: %d pontos\n", Pontos_turisticos[0]);
    printf("Carta 2: %d pontos\n", Pontos_turisticos[1]);
    printf("%s \n", Resultado[1]); }
    else if (Pontos_turisticos[0] == Pontos_turisticos[1]) {
        printf("As cartas empataram!\n");
    }

    if (Ataque2 == 5) {
    printf("Atributo comparado: Densidade Populacional\n");
    printf("Carta 1: %.2f hab/km²\n", Densidade_populacional[0]);
    printf("Carta 2: %.2f hab/km²\n", Densidade_populacional[1]);
    printf("%s \n", Resultado[1]); }
    else if (Densidade_populacional[0] == Densidade_populacional[1]) {
        printf("As cartas empataram!\n");
    }

    if (Ataque2 == 6) {
    printf("Atributo comparado: PIB per Capita\n");
    printf("Carta 1: %.2f reais\n", PIB_per_Capita[0]);
    printf("Carta 2: %.2f reais\n", PIB_per_Capita[1]);
    printf("%s \n", Resultado[1]); }
    else if (PIB_per_Capita[0] == PIB_per_Capita[1]) {
        printf("As cartas empataram!\n");
    }

    // Para dar espaçamento e melhorar o entedimento/leitura.

    printf("--------------------------------------\n");

    // Soma dos atributos escolhidos.

    printf("Iremos somar os valores dos atributos escolhidos e determinar a carta vencedora final:\n");

    // Soma dos atributos escolhidos no primeiro menu para determinar o vencedor final.

    if (Ataque1 == 1) { // Soma dos atributos População.
    SomaCarta1 += Populacao[0];
    SomaCarta2 += Populacao[1]; }
    else if (Ataque1 == 2) { // Soma dos atributos Area.
    SomaCarta1 += Area[0];
    SomaCarta2 += Area[1]; }
    else if (Ataque1 == 3) { // Soma dos atributos PIB.
    SomaCarta1 += PIB[0];
    SomaCarta2 += PIB[1]; }
    else if (Ataque1 == 4) { // Soma dos atributos Pontos turisticos.
    SomaCarta1 += Pontos_turisticos[0];
    SomaCarta2 += Pontos_turisticos[1]; }
    else if (Ataque1 == 5) { // Soma dos atributos Densidade populacional.
    SomaCarta1 += Densidade_populacional[0];
    SomaCarta2 += Densidade_populacional[1]; }
    else if (Ataque1 == 6) { // Soma dos atributos PIB per Capita.
    SomaCarta1 += PIB_per_Capita[0];
    SomaCarta2 += PIB_per_Capita[1]; }

    // Soma dos atributos escolhidos no segundo menu para determinar o vencedor final.

    if (Ataque2 == 1) { // Soma dos atributos População.
    SomaCarta1 += Populacao[0];
    SomaCarta2 += Populacao[1]; }
    else if (Ataque2 == 2) { // Soma dos atributos Area.
    SomaCarta1 += Area[0];
    SomaCarta2 += Area[1]; }
    else if (Ataque2 == 3) { // Soma dos atributos PIB.
    SomaCarta1 += PIB[0];
    SomaCarta2 += PIB[1]; }
    else if (Ataque2 == 4) { // Soma dos atributos Pontos turisticos.
    SomaCarta1 += Pontos_turisticos[0];
    SomaCarta2 += Pontos_turisticos[1]; }
    else if (Ataque2 == 5) { // Soma dos atributos Densidade populacional.
    SomaCarta1 += Densidade_populacional[0];
    SomaCarta2 += Densidade_populacional[1]; }
    else if (Ataque2 == 6) { // Soma dos atributos PIB per Capita.
    SomaCarta1 += PIB_per_Capita[0];
    SomaCarta2 += PIB_per_Capita[1]; }

    // Mostra o resultado final após a soma dos atributos escolhidos no menu.

    printf("Total da Carta 1 (soma dos atributos): %.2f \n", SomaCarta1);
    printf("Total da Carta 2 (soma dos atributos): %.2f \n", SomaCarta2);

    if (SomaCarta1 > SomaCarta2) {
        printf("A carta 1 é a vencedora final!!\n");
    } else if (SomaCarta1 < SomaCarta2) {
        printf("A carta 2 é a vencedora final!!\n");
    } else {
        printf("As cartas empataram!!\n");
    }

    return 0;
}