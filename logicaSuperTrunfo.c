#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char codigo1[4], codigo2[4];
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    // Variáveis do nivel aventureiro
    float densidade1, densidade2, pibper1, pibper2;

    // Variáveis do nivel mestre
    float SuperPoderA = populacao1 + area1 + pib1 + pontos_turisticos1 + pibper1 + (1 / densidade1); 
    float SuperPoderB = populacao2 + area2 + pib2 + pontos_turisticos2 + pibper2 + (1 / densidade2);
    
    // Variável para criar um menu usando o switch
    int opcao;

    // Cadastro da primeira carta
    printf("\nDigite o código da primeira cidade: \n");
    scanf("%3s", codigo1);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %19s", nome1);

    printf("População(somente números inteiros, sem ponto ou vírgula): \n");
    scanf(" %d", &populacao1);

    printf("Pontos turísticos: \n");
    scanf(" %d", &pontos_turisticos1);

    printf("Area em km2 (use pontos para números decimais): \n");
    scanf(" %f", &area1);

    printf("PIB (use pontos para números decimais): \n");
    scanf(" %f", &pib1);

    densidade1 = populacao1 / area1;
    pibper1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("Digite o código da segunda cidade: \n");
    scanf(" %3s", codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %19s", nome2);

    printf("População(somente números inteiros, sem ponto ou vírgula): \n");
    scanf(" %d", &populacao2);

    printf("Pontos turísticos: \n");
    scanf(" %d", &pontos_turisticos2);

    printf("Area em km2 (use pontos para números decimais): \n");
    scanf(" %f", &area2);

    printf("PIB (use pontos para números decimais): \n");
    scanf(" %f", &pib2);

    densidade2 = populacao2 / area2;
    pibper2 = pib2 / populacao2;

    // Exibição dos Dados das Cartas:

    printf("\nCarta 1\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibper1);

    printf("\nCarta 2\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibper2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

   // Menu interativo para selecionar qual atributo será comparado
    printf("\n*** Super Trunfo - Comparação de Cartas ***\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Comparar dois atributos (População + PIB)\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    float valor1 = 0, valor2 = 0;

    switch (opcao) {
    case 1:
        printf("\nComparar a população\n");
        valor1 = populacao1;
        valor2 = populacao2;
        break;
    case 2:
        printf("\nComparar a quantidade de pontos turísticos\n");
        valor1 = pontos_turisticos1;
        valor2 = pontos_turisticos2;
        break;
    case 3:
        printf("\nComparar a Área em km2\n");
        valor1 = area1;
        valor2 = area2;
        break;
    case 4:
        printf("\nComparar o PIB\n");
        valor1 = pib1;
        valor2 = pib2;
        break;
    case 5:
        printf("\nComparar a densidade populacional (menor é melhor)\n");
        valor1 = densidade1;
        valor2 = densidade2;
        // Inverte lógica: menor densidade vence
        printf("A cidade vencedora é: %s\n", 
            (valor1 < valor2) ? nome1 : (valor1 > valor2) ? nome2 : "Empate");
        return 0;
    case 6:
        printf("\nComparar o PIB per Capita\n");
        valor1 = pibper1;
        valor2 = pibper2;
        break;
    case 7:
        printf("\nComparar População + PIB\n");
        valor1 = populacao1 + pib1;
        valor2 = populacao2 + pib2;
        break;
    default:
        printf("\nOpção Inválida!\n");
        return 0;
    }

    // Comparação com operador ternário
printf("A cidade vencedora é: %s\n", 
    (valor1 > valor2) ? nome1 : (valor1 < valor2) ? nome2 : "Empate");

}
