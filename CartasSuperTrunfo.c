#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Pedro Fontenele

int main(){
    // Cadastro das cartas
    printf("***Jogo SUPER TRUNFO***\n");

    char codigo1[4]; // Código da carta (ex: A01, B02, etc.)
    char pais1[15];
    char estado1[15], cidade1[15];
    unsigned long int populacao1;
    int Pturistico1;
    float area1, PIB1, PIBpercapita1, densidadepopulacional1;
    
    printf("\nRegistre o código da PRIMEIRA carta: ");
    scanf("%s", &codigo1);

    printf("\nQual o nome do PAÍS da primeira carta?\n");
    scanf("%s", &pais1);

    printf("\nDiga um ESTADO desse País: \n");
    scanf("%s", &estado1); 

    printf("\nDiga uma CIDADE desse Estado: \n");
    scanf("%s", &cidade1);

    printf("\nDiga a população: \n");
    scanf("%u", &populacao1);

    printf("\nDiga a quantidade de Pontos turísticos dessa cidade: \n");
    scanf("%d", &Pturistico1);

    printf("\nDiga a Área: \n");
    scanf("%f", &area1);

    printf("\nDiga o PIB dessa cidade: \n");
    scanf("%f", &PIB1);

    /* 
    Densidade populacional: população / area 
    basta dividir matematicamente a população absoluta pela área ocupada por essa população
    */
    densidadepopulacional1 = populacao1 / area1;

    /* 
    PIB per capita: PIB / população
    a divisão do PIB pelo número de habitantes de um país, estado ou cidade
    */
    PIBpercapita1 = PIB1  / populacao1;

    // Calculando a densidade populacional invertida
    float desidadepopulacionalinvertida1 = 1 / densidadepopulacional1;

    /* 
    Super Poder é a soma de todas as propriedades:
    população, área, PIB, PIB per capta e densidade populacional invertida para comparação e número de pontos turísticos
    */ 
    float SuperPoder1= populacao1 + area1 + PIB1 + PIBpercapita1 + desidadepopulacionalinvertida1 + Pturistico1;
    
    printf("Carta um cadastrada com sucesso.\n");

    // Exibindo informações das cartas
    printf("\nResumo das informações cadastradas\n");
    printf("\nCarta 1\n");
    printf("Código da carta: %s\n", codigo1);
    printf("País: %s\n", pais1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Pontos turísticos: %d\n", Pturistico1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("PIB per capita: %f\n", PIBpercapita1);
    printf("Densidade populacional: %.4f pessoas/km²\n", densidadepopulacional1);
    printf("Super poder da carta: %f\n", SuperPoder1);

    printf("\nVamos cadastrar a segunda carta\n");

    char codigo2[4]; // Código da carta (ex: A01, B02, etc.)
    char pais2[15];
    char estado2[15], cidade2[15];
    unsigned long int populacao2; 
    int Pturistico2;
    float area2, PIB2, PIBpercapita2, densidadepopulacional2;

    printf("\nRegistre o código da SEGUNDA carta: ");
    scanf("%s", &codigo2);

    printf("\nQual o nome do PAÍS da segunda carta?\n");
    scanf("%s", &pais2);

    printf("\nDiga um ESTADO desse País: \n");
    scanf("%s", &estado2); 

    printf("\nDiga uma CIDADE desse Estado: \n");
    scanf("%s", &cidade2);

    printf("\nDiga a população: \n");
    scanf("%u", &populacao2);

    printf("\nDiga a quantidade de Pontos turísticos dessa cidade: \n");
    scanf("%d", &Pturistico2);

    printf("\nDiga a Área: \n");
    scanf("%f", &area2);

    printf("\nDiga o PIB dessa cidade: \n");
    scanf("%f", &PIB2);

    /* 
    Densidade populacional: população / area 
    basta dividir matematicamente a população absoluta pela área ocupada por essa população
    */
    densidadepopulacional2 = populacao2 / area2;

    /* 
    PIB per capita: PIB / população
    a divisão do PIB pelo número de habitantes de um país, estado ou cidade
    */
    PIBpercapita2 = PIB2 / populacao2;

    // Calculando a densidade populacional invertida
    float desidadepopulacionalinvertida2 = 1 / densidadepopulacional2;

    /* 
    Super Poder é a soma de todas as propriedades:
    população, área, PIB, PIB per capta e densidade populacional invertida para comparação e número de pontos turísticos
    */ 
    float SuperPoder2= populacao2 + area2 + PIB2 + PIBpercapita2 + desidadepopulacionalinvertida2 + Pturistico2;

    // Exibindo informações das cartas
    printf("\nResumo das informações cadastradas\n");
    printf("\nCarta 2\n");
    printf("Código da carta: %s\n", codigo2);
    printf("País: %s\n", pais2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Pontos turísticos: %d\n", Pturistico2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("PIB per capita: %f\n", PIBpercapita2);
    printf("Densidade populacional: %.4f pessoas/km²\n", densidadepopulacional2);
    printf("Super poder da carta: %f\n", SuperPoder2);

    printf("\nCadastro de cartas finalizado.\n");

    //Comparando as cartas
    printf("\n**Vamos agora comparar as cartas cadastradas**\n");

    //Comparando as cartas
    printf("\n**Vamos agora comparar as cartas cadastradas**\n");

    //Comparando a população
    if (populacao1 > populacao2){
        printf("\nComparação de cartas\n(Atributo: População):\n");
        printf("Carta 1 - %s (%s): %u\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %u\n", cidade2, estado2, populacao2);
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("\nComparação de cartas\n(Atributo: População):\n");
        printf("Carta 1 - %s (%s): %u\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %u\n", cidade2, estado2, populacao2);
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //Comparando a area
    if (area1 > area2){
        printf("\nComparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("\nComparação de cartas (Atributo: Área):\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //Comparando o PIB
    if (PIB1 > PIB2){
        printf("\nComparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, PIB1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, PIB2);
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("\nComparação de cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, PIB1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, PIB2);
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //Comparando O PIB per capita
    if (PIBpercapita1 > PIBpercapita2){
        printf("\nComparação de cartas (Atributo: PIB per capita):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, PIBpercapita1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, PIBpercapita2);
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("\nComparação de cartas (Atributo: PIB per capita):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, PIBpercapita1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, PIBpercapita2);
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //Comparando os pontos turisticos
    if (Pturistico1 > Pturistico2){
        printf("\nComparação de cartas (Atributo: Ponto Turistico):\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, Pturistico1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, Pturistico2);
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("\nComparação de cartas (Atributo: Ponto Turistico):\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, Pturistico1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, Pturistico2);
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //Comparando a densidade populacional
    if (densidadepopulacional1 < densidadepopulacional2){
        printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.4f\n", cidade1, estado1, densidadepopulacional1);
        printf("Carta 2 - %s (%s): %.4f\n", cidade2, estado2, densidadepopulacional2);
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.4f\n", cidade1, estado1, densidadepopulacional1);
        printf("Carta 2 - %s (%s): %.4f\n", cidade2, estado2, densidadepopulacional2);
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //Comparando o super poder
    if (SuperPoder1 > SuperPoder2){
        printf("\nComparação de cartas (Atributo: Super Poder):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, SuperPoder1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, SuperPoder2);
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("\nComparação de cartas (Atributo: Super Poder):\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, SuperPoder1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, SuperPoder2);
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }


    return 0;

}