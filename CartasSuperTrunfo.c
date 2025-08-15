#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

     // Estado(letra de A a H) e Código da carta(letra do estado + um número de 01 a 04)
    char estado1, estado2, cod1[9], cod2[9];

    // nome da cidade
    char cidade1[30], cidade2[30];

    // população e número de pontos turisticos
    int pop1, pop2, pont_tur1, pont_tur2;

    // Área da cidade(em Km quadrados) e PIB
    float area_cid1, area_cid2, pib1, pib2;

    // Densidade Populacional e PIB
    float densidade1, densidade2, pib_per1, pib_per2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite os dados da primeira carta: \n");
    printf("Estado(letra A a H): ");
    scanf(" %c", &estado1);

    printf("\nCódigo de estado(Letra do estado + Número de 01 a 04): ");
    scanf(" %s", cod1);

    printf("\nNome da cidade: ");
    scanf(" %s", cidade1);

    printf("\nPopulação da cidade: ");
    scanf(" %d", &pop1); 

    printf("\nNúmero de pontos turísticos: ");
    scanf(" %d", &pont_tur1);

    printf("\nÁrea da cidade: ");
    scanf(" %f", &area_cid1);

    printf("\nPIB: ");
    scanf(" %f", &pib1);

    // Regitro da segunda carta

    printf("\n\nDigite os dados da segunda carta: \n");
    printf("Estado(letra A a H): ");
    scanf(" %c", &estado2);

    printf("\nCódigo de estado(Letra do estado + Número de 01 a 04): ");
    scanf(" %s", cod2);

    printf("\nNome da cidade: ");
    scanf(" %s", cidade2);

    printf("\nPopulação da cidade: ");
    scanf(" %d", &pop2);

    printf("\nNúmero de pontos turísticos: ");
    scanf(" %d", &pont_tur2);

    printf("\nÁrea da cidade: ");
    scanf(" %f", &area_cid2);

    printf("\nPIB: ");
    scanf(" %f", &pib2);


    /*
    NOTA: Sobre a PIB per Capita. 
    se o usuário não usar o valor inteiro em bilhôes sem abreviações, o resuldado será zero(devido a exigências de formatação).
    */

    densidade1 = (float) pop1 / area_cid1;
    densidade2 = (float) pop2 / area_cid2;

    pib_per1 = (float) pib1 / pop1;
    pib_per2 = (float) pib2 / pop2;

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // "Mostrando a cartas"


    printf("\n\nPrimeira Carta\n\n");

    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação da cidade: %d\nNúmero de Pontos Turísticos: %d\nÁrea da Cidade: %fKm²\nPIB: %f Bilhões de Reais", estado1, cod1, cidade1, pop1, pont_tur1, area_cid1, pib1);

    printf("Densidade Populacional: %.2f Hab/Km²\nPIB per Capita: %.2f Reais", densidade1, pib_per1);



    printf("\n\nSegunda Carta\n\n");

    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação da cidade: %d\nNúmero de Pontos Turísticos: %d\nÁrea da Cidade: %fKm²\nPIB: %f Bilhões de Reais", estado2, cod2, cidade2, pop2, pont_tur2, area_cid2, pib2);

    printf("Densidade Populacional: %.2f Hab/Km²\nPIB Per Capita: %.2f Reais", densidade2, pib_per2);

    
    return 0;
}
