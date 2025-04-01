#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Pedro Fontenele

int main(){
    // Cadastro das cartas
    printf("***Jogo SUPER TRUNFO***\n");

    char* codigo1[4]; // Código da carta (ex: A01, B02, etc.)
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

    int atributo1;
    float valor1A1, valor1A2, valor2A1, valor2A2;

     // Menu interativo
     printf("\nEscolha um atributo para comparar:\n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos turísticos\n");
     printf("5. Densidade demográfica\n");
     printf("6. Super Poder\n");
     printf("Sua escolha: ");
     scanf("%d", &atributo1);
 
      // Comparação baseada na escolha
      switch (atributo1) {
         case 1: // População
             printf("\nComparação de População:\n");
             printf("País 1: %s - %d habitantes\n", pais1, populacao1);
             printf("País 2: %s - %d habitantes\n", pais2, populacao2);
 
             valor1A1 = populacao1;
             valor2A1 = populacao2;
 
             if (populacao1 > populacao2)
                 printf("Resultado: %s venceu!\n", pais1);
             else if (populacao1 < populacao2)
                 printf("Resultado: %s venceu!\n", pais2);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         case 2: // Área
             printf("\nComparação de Área:\n");
             printf("País 1: %s - %.2f km²\n", pais1, area1);
             printf("País 2: %s - %.2f km²\n", pais2, area2);
 
             valor1A1 = area1;
             valor2A1 = area2;
 
             if (area1 > area2)
                 printf("Resultado: %s venceu!\n", pais1);
             else if (area1 < area2)
                 printf("Resultado: %s venceu!\n", pais2);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         case 3: // PIB
             printf("\nComparação de PIB:\n");
             printf("País 1: %s - %.2f\n", pais1, PIB1);
             printf("País 2: %s - %.2f\n", pais2, PIB2);
 
             valor1A1 = PIB1;
             valor2A1 = PIB2;
 
             if (PIB1 > PIB2)
                 printf("Resultado: %s venceu!\n", pais1);
             else if (PIB1 < PIB2)
                 printf("Resultado: %s venceu!\n", pais2);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         case 4: // Pontos turísticos
             printf("\nComparação de Pontos Turísticos:\n");
             printf("País 1: %s - %d pontos turísticos\n", pais1, Pturistico1);
             printf("País 2: %s - %d pontos turísticos\n", pais2, Pturistico2);
 
             valor1A1 = Pturistico1;
             valor2A1 = Pturistico2;
 
             if (Pturistico1 > Pturistico2)
                 printf("Resultado: %s venceu!\n", pais1);
             else if (Pturistico1 < Pturistico2)
                 printf("Resultado: %s venceu!\n", pais2);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         case 5: // Densidade demográfica
             printf("\nComparação de Densidade Demográfica:\n");
             printf("País 1: %s - %.4f pessoas/km²\n", pais1, densidadepopulacional1);
             printf("País 2: %s - %.4f pessoas/km²\n", pais2, densidadepopulacional2);
 
             valor1A1 = densidadepopulacional1;
             valor2A1 = densidadepopulacional2;
 
             if (densidadepopulacional1 < densidadepopulacional2)
                 printf("Resultado: %s venceu!\n", pais1);
             else if (densidadepopulacional1 > densidadepopulacional2)
                 printf("Resultado: %s venceu!\n", pais2);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         case 6: // Super Poder 
             printf("\nComparação dos Super Poder:\n");
             printf("País 1: %s - %.4f pessoas/km²\n", pais1, SuperPoder1);
             printf("País 2: %s - %.4f pessoas/km²\n", pais2, SuperPoder2);
 
             valor1A1 = SuperPoder1;
             valor2A1 = SuperPoder2;
 
             if (SuperPoder1 > SuperPoder2)
                 printf("Resultado: %s venceu!\n", pais1);
             else if (SuperPoder1 < SuperPoder2)
                 printf("Resultado: %s venceu!\n", pais2);
             else
                 printf("Resultado: Empate!\n");
             break;
 
         default:
             printf("Opção inválida! Tente novamente.\n");
     }

    int atributo2;
    
    // Menu interativo
    printf("\nEscolha um segundo atributo para comparar:\n"); //Diferente do primeiro
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. Super Poder\n");
    printf("Sua escolha: ");
    scanf("%d", &atributo2);
    
    if (atributo2 == atributo1) {
        printf("O segundo atributo não pode ser igual ao primeiro! Tente novamente.\n");
    }

     // Comparação baseada na escolha
     switch (atributo2) {
        case 1: // População
            printf("\nComparação de População:\n");
            printf("País 1: %s - %d habitantes\n", pais1, populacao1);
            printf("País 2: %s - %d habitantes\n", pais2, populacao2);

            valor1A2 = populacao1;
            valor2A2 = populacao2;

            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (populacao1 < populacao2)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("\nComparação de Área:\n");
            printf("País 1: %s - %.2f km²\n", pais1, area1);
            printf("País 2: %s - %.2f km²\n", pais2, area2);

            valor1A2 = area1;
            valor2A2 = area2;

            if (area1 > area2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (area1 < area2)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("\nComparação de PIB:\n");
            printf("País 1: %s - %.2f\n", pais1, PIB1);
            printf("País 2: %s - %.2f\n", pais2, PIB2);

            valor1A2 = PIB1;
            valor2A2 = PIB2;

            if (PIB1 > PIB2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (PIB1 < PIB2)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("\nComparação de Pontos Turísticos:\n");
            printf("País 1: %s - %d pontos turísticos\n", pais1, Pturistico1);
            printf("País 2: %s - %d pontos turísticos\n", pais2, Pturistico2);

            valor1A2 = Pturistico1;
            valor2A2 = Pturistico2;

            if (Pturistico1 > Pturistico2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (Pturistico1 < Pturistico2)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade demográfica
            printf("\nComparação de Densidade Demográfica:\n");
            printf("País 1: %s - %.4f pessoas/km²\n", pais1, densidadepopulacional1);
            printf("País 2: %s - %.4f pessoas/km²\n", pais2, densidadepopulacional2);

            valor1A2 = densidadepopulacional1;
            valor2A2 = densidadepopulacional2;

            if (densidadepopulacional1 < densidadepopulacional2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (densidadepopulacional1 > densidadepopulacional2)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 6: // Super Poder 
            printf("\nComparação dos Super Poder:\n");
            printf("País 1: %s - %.4f pessoas/km²\n", pais1, SuperPoder1);
            printf("País 2: %s - %.4f pessoas/km²\n", pais2, SuperPoder2);

            valor1A2 = SuperPoder1;
            valor2A2 = SuperPoder2;

            if (SuperPoder1 > SuperPoder2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (SuperPoder1 < SuperPoder2)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    // Soma dos valores dos atributos
    float soma1 = valor1A1 + valor1A2;
    float soma2 = valor2A1 + valor2A2;

    // Exibição do resultado da rodada
    printf("\n--- Resultado da Rodada ---\n");
    printf("Soma dos atributos:\n");

    if (soma1 > soma2)
    {
        printf("País 1 (%s):%.2f\nPaís 2 (%s):%.2f\n*A CARTA 1 VENCEU!*", pais1, pais2,soma1, soma2);
    }else if (soma1 < soma2){
        printf("País 1 (%s):%.2f\nPaís 2 (%s):%.2f\n*A CARTA 2 VENCEU!*",pais1, pais2, soma1, soma2);
    }else{
        printf("EMPATE!!!");
    }
    
    return 0;
}
