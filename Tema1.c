#include <stdio.h>

int main() {
    char estado[3];
    int codigo;
    char nome[50];
    long populacao;
    double pib;
    double area;
    int pontos_turisticos;
    double densidade_populacional;
    double pib_per_capita;

    // Solicita informações da cidade ao usuário
    printf("Digite o estado (sigla): ");
    scanf("%s", estado);

    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("Digite a população: ");
    scanf("%ld", &populacao);

    printf("Digite o PIB: ");
    scanf("%lf", &pib);

    printf("Digite a área (em km²): ");
    scanf("%lf", &area);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Calcula Densidade e PIP
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    // Exibe infos da cidade
    printf("\n--- Informações da Cidade ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %ld\n", populacao);
    printf("PIB: %.2lf\n", pib);
    printf("Área: %.2lf km²\n", area);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade_populacional);
    printf("PIB Per Capita: %.2lf\n", pib_per_capita);

    return 0;
}