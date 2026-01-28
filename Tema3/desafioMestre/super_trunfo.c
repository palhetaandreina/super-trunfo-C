#include <stdio.h>

int main() {

    /* ===== CARTAS PRÉ-CADASTRADAS ===== */
    char pais1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1900.0;
    int pontos1 = 25;
    float densidade1 = 25.1;

    char pais2[] = "Japão";
    int populacao2 = 125000000;
    float area2 = 377975.0;
    float pib2 = 4200.0;
    int pontos2 = 40;
    float densidade2 = 331.0;

    int atributo1, atributo2;
    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;
    float soma1 = 0, soma2 = 0;

    /* ===== MENU DO PRIMEIRO ATRIBUTO ===== */
    printf("=== Escolha o PRIMEIRO atributo ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    /* ===== MENU DO SEGUNDO ATRIBUTO (DINÂMICO) ===== */
    printf("\n=== Escolha o SEGUNDO atributo ===\n");

    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turísticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demográfica\n");

    printf("Opção: ");
    scanf("%d", &atributo2);

    /* ===== VALIDAÇÃO ===== */
    if (atributo1 == atributo2) {
        printf("\nErro: não é permitido escolher o mesmo atributo duas vezes.\n");
        return 0;
    }

    /* ===== ATRIBUTO 1 ===== */
    switch (atributo1) {
        case 1:
            valor1_attr1 = populacao1;
            valor2_attr1 = populacao2;
            break;
        case 2:
            valor1_attr1 = area1;
            valor2_attr1 = area2;
            break;
        case 3:
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            break;
        case 4:
            valor1_attr1 = pontos1;
            valor2_attr1 = pontos2;
            break;
        case 5:
            valor1_attr1 = densidade1;
            valor2_attr1 = densidade2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    /* ===== ATRIBUTO 2 ===== */
    switch (atributo2) {
        case 1:
            valor1_attr2 = populacao1;
            valor2_attr2 = populacao2;
            break;
        case 2:
            valor1_attr2 = area1;
            valor2_attr2 = area2;
            break;
        case 3:
            valor1_attr2 = pib1;
            valor2_attr2 = pib2;
            break;
        case 4:
            valor1_attr2 = pontos1;
            valor2_attr2 = pontos2;
            break;
        case 5:
            valor1_attr2 = densidade1;
            valor2_attr2 = densidade2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    /* ===== SOMA DOS ATRIBUTOS ===== */
    /* Regra especial: densidade (menor vence) */
    soma1 += (atributo1 == 5) ? -valor1_attr1 : valor1_attr1;
    soma2 += (atributo1 == 5) ? -valor2_attr1 : valor2_attr1;

    soma1 += (atributo2 == 5) ? -valor1_attr2 : valor1_attr2;
    soma2 += (atributo2 == 5) ? -valor2_attr2 : valor2_attr2;

    /* ===== RESULTADO ===== */
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("%s x %s\n\n", pais1, pais2);

    printf("Atributo 1: %.2f x %.2f\n", valor1_attr1, valor2_attr1);
    printf("Atributo 2: %.2f x %.2f\n\n", valor1_attr2, valor2_attr2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    if (soma1 > soma2) {
        printf("\nVencedor: %s\n", pais1);
    } else if (soma2 > soma1) {
        printf("\nVencedor: %s\n", pais2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
