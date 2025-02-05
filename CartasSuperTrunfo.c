#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Pedro Fontenele

int main() {
     printf("***Jogo SUPER TRUNFO***\n");

    char codigo[4]; // Código da carta (ex: A01, B02, etc.)

    printf("\nRegistre o código dessa carta: \n"); 
    scanf("%s", codigo);
    
    printf("\nAgora vamos cadastrar as informações dessa carta\n");

    char pais[15]; // Nome do país

    printf("\nQual o nome do país a ser atribuído para a carta? \n");
    scanf("%s", pais);

    char estado[15], cidade[15]; // Nome do estado e Nome da cidade que sera cadastradas as informações da carta
    int populacao, Pturistico;
    float area, PIB; 

    printf("\nDiga um Estado desse país: \n");
    scanf("%s", estado);

    printf("\nAgora, uma Cidade desse estado: \n");
    scanf("%s", cidade);

    printf("\nAgora gostaria que você me falasse a população geral dessa cidade: \n");
    scanf("%d", &populacao);

    printf("\nAgora, qual o número de pontos turísticos dessa cidade: \n");
    scanf("%d", &Pturistico);

    printf("\nPoderia me informar a área dessa cidade: \n");
    scanf("%f", &area);

    printf("\nAgora qual o PIB dessa cidade: \n");
    scanf("%f", &PIB);

    float PIBpercapita, densidadepopulacional;

    /* 
    Densidade populacional: população / area 
    basta dividir matematicamente a população absoluta pela área ocupada por essa população
    */
    densidadepopulacional = populacao / area;
    
   /* PIB per capita: PIB / população
   a divisão do PIB pelo número de habitantes de um país, estado ou cidade
   */
   PIBpercapita = PIB / populacao;

    printf("\nParabéns, as informações da carta foram cadastradas com sucesso!\n");

    // Exibindo as informações fornecidas pelo usuário
    printf("\nResumo das informações cadastradas:\n");
    printf("Código da carta: %s\n", codigo);
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", Pturistico);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("PIB per capita: %f\n", PIBpercapita);
    printf("Densidade populacional: %.4f pessoas/km²\n", densidadepopulacional);

    printf("Cadastro finalizado. Obrigado por usar o sistema!\n");

    return 0;
}
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Pedro Fontenele

int main() {
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

    printf("\nQual o nome do país da primeira carta?\n ");
    scanf("%s", &pais1);

    printf("\nDiga um Estado da primeira carta: \n");
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

    /* PIB per capita: PIB / população
   a divisão do PIB pelo número de habitantes de um país, estado ou cidade
   */
    PIBpercapita1 = PIB1  / populacao1;

    // Calculando a densidade populacional invertida
    float desidadepopulacionalinvertida1 = 1 / densidadepopulacional1;

    /* Super Poder é a soma de todas as propriedades:
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
    printf("População: %ul\n", populacao1);
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

    printf("\nQual o nome do país da segunda carta?\n");
    scanf("%s", &pais2);

    printf("\nDiga um Estado da segunda carta: \n");
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

    /* PIB per capita: PIB / população
   a divisão do PIB pelo número de habitantes de um país, estado ou cidade
   */
    PIBpercapita2 = PIB2 / populacao2;

    // Calculando a densidade populacional invertida
    float desidadepopulacionalinvertida2 = 1 / densidadepopulacional2;

    /* Super Poder é a soma de todas as propriedades:
    população, área, PIB, PIB per capta e densidade populacional invertida para comparação e número de pontos turísticos
    */ 
    float SuperPoder2= populacao2 + area2 + PIB2 + PIBpercapita2 + desidadepopulacionalinvertida2 + Pturistico2;

    // Exibindo informações das cartas
    printf("\nResumo das informações cadastradas\n");
    printf("\nCarta 2\n");
    printf("Código da carta: %s", codigo2);
    printf("País: %s\n", pais2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %ul\n", populacao2);
    printf("Pontos turísticos: %d\n", Pturistico2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("PIB per capita: %f\n", PIBpercapita2);
    printf("Densidade populacional: %.4f pessoas/km²\n", densidadepopulacional2);
    printf("Super poder da carta: %f\n", SuperPoder2);

    printf("Cadastro de cartas finalizado.\nVamos agora comparar as cartas cadastradas\n");

    // Pergunta ao usuário se deseja proseguir com a comparação das cartas
    char resposta;
    printf("\nVocê gostaria de proseguir para a comparação das cartas? (s/n): ");
    scanf(" %c", &resposta);

    if (resposta == 's' || resposta == 'S')

    printf("porque");
    
    return 0;