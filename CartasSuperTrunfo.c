#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
     char estado;
     char cod_carta[4];
     char nome_cidade[20];
     int populacao, n_pontos_turisticos;
     float area, pib;

     printf("###### Bem vindos ao jogo SuperTrunfo! ######\n\n");
     printf("Vamos começar, cadastrando cidades.\n\n");

     printf("Digite o estado: ");
     scanf("%c", &estado);

     printf("Digite o código da carta: ");
     scanf("%s", cod_carta);

     printf("Digite o nome da cidade: ");
     scanf(" %[^\n]s", nome_cidade);

     printf("Digite o total de população: ");
     scanf("%d", &populacao);

     printf("Digite o tamanha da Área: ");
     scanf("%f", &area);

     printf("Digite o PIB: ");
     scanf("%f", &pib);

     printf("Digite o número de pontos turísticos: ");
     scanf("%d", &n_pontos_turisticos);

     printf("\nA seguinte cidade foi cadastrada:\n");
     
     printf("\nEstado: %c\n", estado);
     printf("Código da carta: %c%s\n", estado, cod_carta);
     printf("Nome da cidade: %s\n", nome_cidade);
     printf("População: %d\n", populacao);
     printf("Área: %.2f km²\n", area);
     printf("PIB: %.2f bilhões de reais\n", pib);
     printf("Número de pontos turísticos: %d\n", n_pontos_turisticos);

     return 0;
}
