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
    // Declaração das variáveis das duas cartas
    unsigned long int populacao1, populacao2; // Alterado para unsigned long int conforme instrução
    float area1, area2, pib1, pib2, idh1, idh2, expectativaVida1, expectativaVida2;

    // Entrada dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("IDH: ");
    scanf("%f", &idh1);
    printf("Expectativa de Vida: ");
    scanf("%f", &expectativaVida1);

    // Entrada dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("IDH: ");
    scanf("%f", &idh2);
    printf("Expectativa de Vida: ");
    scanf("%f", &expectativaVida2);
    
// Cálculo dos atributos derivados
    float densidade1 = calcularDensidade(populacao1, area1); // Cálculo da densidade populacional da Carta 1
    float densidade2 = calcularDensidade(populacao2, area2); // Cálculo da densidade populacional da Carta 2

    float pibPerCapita1 = calcularPIBPerCapita(pib1, populacao1); // Cálculo do PIB per capita da Carta 1
    float pibPerCapita2 = calcularPIBPerCapita(pib2, populacao2); // Cálculo do PIB per capita da Carta 2

    float idhAjustado1 = calcularIDHAjustado(idh1, expectativaVida1); // Cálculo do IDH ajustado da Carta 1
    float idhAjustado2 = calcularIDHAjustado(idh2, expectativaVida2); // Cálculo do IDH ajustado da Carta 2

    float superPoder1 = calcularSuperPoder(pibPerCapita1, densidade1, idhAjustado1); // Cálculo do Super Poder da Carta 1
    float superPoder2 = calcularSuperPoder(pibPerCapita2, densidade2, idhAjustado2); // Cálculo do Super Poder da Carta 2

    // Comparações entre os atributos
    printf("\nComparação entre as cartas:\n");

    printf("Populacao: Carta %d venceu\n", comparar(populacao1, populacao2, 0) + 1); // Maior valor vence
    printf("Area: Carta %d venceu\n", comparar(area1, area2, 0) + 1); // Maior valor vence
    printf("PIB: Carta %d venceu\n", comparar(pib1, pib2, 0) + 1); // Maior valor vence
    printf("IDH: Carta %d venceu\n", comparar(idh1, idh2, 0) + 1); // Maior valor vence
    printf("Expectativa de Vida: Carta %d venceu\n", comparar(expectativaVida1, expectativaVida2, 0) + 1); // Maior valor vence
    printf("Densidade Populacional: Carta %d venceu\n", comparar(densidade1, densidade2, 1) + 1); // Menor valor vence
    printf("PIB per Capita: Carta %d venceu\n", comparar(pibPerCapita1, pibPerCapita2, 0) + 1); // Maior valor vence
    printf("IDH Ajustado: Carta %d venceu\n", comparar(idhAjustado1, idhAjustado2, 0) + 1); // Maior valor vence
    printf("Super Poder: Carta %d venceu\n", comparar(superPoder1, superPoder2, 0) + 1); // Maior valor vence

    // Exibição dos Super Poderes
    printf("\nSuper Poder Carta 1: %.2f\n", superPoder1);
    printf("Super Poder Carta 2: %.2f\n", superPoder2);

    return 0;
}
