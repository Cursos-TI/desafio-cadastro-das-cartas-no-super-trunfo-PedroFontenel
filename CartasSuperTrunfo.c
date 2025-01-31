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

    printf("Cadastro finalizado. Obrigado por usar o sistema!\n");

    return 0;
}
