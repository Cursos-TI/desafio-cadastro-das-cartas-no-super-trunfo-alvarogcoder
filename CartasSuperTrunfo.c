#include <stdio.h>

int main() {
    //Variáveis da carta 1
    int populacao_1, numero_de_pontos_turisticos_1;
    float area_km2_1, pib_1;
    char estado_1, codigo_carta_1[20], nome_cidade_1[20];

    //Variáveis da carta 2
    int populacao_2, numero_de_pontos_turisticos_2;
    float area_km2_2, pib_2;
    char estado_2, codigo_carta_2[20], nome_cidade_2[20];

    printf("Digite o estado (uma letra): \n");
    scanf(" %c", &estado_1);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo_carta_1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_cidade_1);

    printf("Digite a população: \n");
    scanf(" %d", &populacao_1);

    printf("Digite a área em km²: \n");
    scanf(" %f", &area_km2_1);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib_1);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos_1);

    printf("\n--- CARTA 1 CADASTRADA ---\n"); //

    printf("Estado: %c \n", estado_1);
    printf("Código da carta: %s \n", codigo_carta_1);
    printf("Nome da cidade: %s \n", nome_cidade_1);
    printf("População: %d \n", populacao_1);
    printf("Área: %.2f km² \n", area_km2_1);
    printf("PIB: %.2f \n", pib_1);
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos_1);

    printf("\n--- AGORA, INSIRA OS DADOS DA CARTA 2 ---\n");

    printf("Digite o estado (uma letra): \n");
    scanf(" %c", &estado_2);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo_carta_2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_cidade_2);

    printf("Digite a população: \n");
    scanf(" %d", &populacao_2);

    printf("Digite a área em km²: \n");
    scanf(" %f", &area_km2_2);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib_2);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos_2);

    printf("\n--- CARTA 2 CADASTRADA ---\n"); //

    printf("Estado: %c \n", estado_2);
    printf("Código da carta: %s \n", codigo_carta_2);
    printf("Nome da cidade: %s \n", nome_cidade_2);
    printf("População: %d \n", populacao_2);
    printf("Área: %.2f km² \n", area_km2_2);
    printf("PIB: %.2f \n", pib_2);
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos_2);


    return 0;


}