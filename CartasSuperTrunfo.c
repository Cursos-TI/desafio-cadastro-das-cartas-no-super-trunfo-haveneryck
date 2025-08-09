#include <stdio.h>

// Função para calcular a densidade populacional
float calcularDensidade(unsigned long int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(float pib, unsigned long int populacao) {
    return (pib * 1000000000) / populacao; // Convertendo PIB de bilhões para reais
}

// Função para calcular o IDH ajustado
float calcularIDHAjustado(float idh, float expectativaVida) {
    return idh * expectativaVida;
}

// Função para calcular o Super Poder
float calcularSuperPoder(float pibPerCapita, float densidade, float idhAjustado) {
    return pibPerCapita + (1 / densidade) + idhAjustado; // Soma dos atributos com densidade invertida
}

// Função para comparar dois valores e retornar o vencedor
int comparar(float valor1, float valor2, int menorVence) {
    if (menorVence) {
        return valor1 < valor2 ? 1 : 0; // Vence quem tem menor valor
    } else {
        return valor1 > valor2 ? 1 : 0; // Vence quem tem maior valor
    }
}

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    // Adição do nível Aventureiro: novos atributos calculados
    float densidade1;       // População / Área
    float pibPerCapita1;    // PIB / População

     // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    // Adição do nível Aventureiro: novos atributos calculados
    float densidade2;
    float pibPerCapita2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    // Adição do nível Aventureiro: cálculo automático dos novos atributos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB convertido para reais

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Adição do nível Aventureiro: cálculo automático dos novos atributos
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    // Adição do nível Aventureiro: exibição dos novos atributos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    // Adição do nível Aventureiro: exibição dos novos atributos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}
