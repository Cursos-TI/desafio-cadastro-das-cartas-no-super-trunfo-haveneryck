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
