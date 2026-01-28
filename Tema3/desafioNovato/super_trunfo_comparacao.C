#include <stdio.h>
#include <string.h>

int main() {
    /* ===== CARTA 1 ===== */
    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    /* ===== CARTA 2 ===== */
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    /* ===== ENTRADA CARTA 1 ===== */
    printf("Cadastro da Carta 1\n");

    printf("Estado (ex: SP): ");
    scanf("%2s", estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    getchar();

    printf("Nome da Cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* ===== CÁLCULOS CARTA 1 ===== */
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    /* ===== ENTRADA CARTA 2 ===== */
    printf("\nCadastro da Carta 2\n");

    printf("Estado (ex: RJ): ");
    scanf("%2s", estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    getchar();

    printf("Nome da Cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ===== CÁLCULOS CARTA 2 ===== */
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    /* =====================================================
       COMPARAÇÃO ENTRE AS CARTAS
       ATRIBUTO ESCOLHIDO: POPULAÇÃO
       ===================================================== */

    printf("\nComparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
