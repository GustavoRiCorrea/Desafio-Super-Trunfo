#include <stdio.h>

// Definição da estrutura Carta
typedef struct {
    char estado;                 // Ex: 'A' a 'H'
    char codigo[4];              // Ex: "A01" (precisa de espaço para '\0')
    char nomeCidade[50];         // Nome da cidade
    int populacao;               // Habitantes
    float area;                  // Km²
    float pib;                   // PIB
    int pontosTuristicos;        // Quantidade de pontos turísticos
    float DensidadePopulacional; // Habitantes por Km²
    float PIBperCapita;          // PIB per capita
    float SuperPoder;            // Atributo especial
} Carta;

// Função para mostrar os atributos de uma carta
void mostrarCarta(Carta c) {
    printf("Estado: %c\n", c.estado); // Mostra o estado
    printf("Código: %s\n", c.codigo); // Mostra o código
    printf("Cidade: %s\n", c.nomeCidade); // Mostra o nome da cidade
    printf("População: %d\n", c.populacao); // Mostra a população
    printf("Área: %.2f km²\n", c.area); // Mostra a área
    printf("PIB: %.2f bilhões de reais\n", c.pib); // Mostra o PIB
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos); // Mostra os pontos turísticos
    c.DensidadePopulacional = c.populacao / c.area; // Calcula a densidade populacional
    printf("Densidade Populacional: %.2f habitantes/km²\n", c.DensidadePopulacional); // Mostra a densidade populacional
    c.PIBperCapita = (c.pib * 1e9) / c.populacao; // Calcula o PIB per capita
    printf("PIB per Capita: %.2f reais\n", c.PIBperCapita); // Mostra o PIB per capita
    c.SuperPoder = c.populacao + c.area + c.pib + c.pontosTuristicos + c.DensidadePopulacional + c.PIBperCapita; // Calcula o super poder
    printf("Super Poder: %.2f\n", c.SuperPoder); // Mostra o super poder
    printf("------------------------------\n\n"); // Linha de separação
}

// Função para comparar duas cartas
void compararCartas( Carta carta1, Carta carta2) { 
    printf("========= Comparando as Cartas =========\n");

    // Comparando População
    printf("Comparando População:\n");
    if (carta1.populacao > carta2.populacao) printf("carta 1 venceu!\n");
    else if (carta1.populacao < carta2.populacao) printf("carta 2 venceu!\n");
    else printf("Empate!\n");

    // Comparando Área
    printf("Comparando Área:\n");
    if (carta1.area > carta2.area) printf("carta 1 venceu!\n");
    else if (carta1.area < carta2.area) printf("carta 2 venceu!\n");
    else printf("Empate!\n");

    // Comparando PIB
    printf("Comparando PIB:\n");
    if (carta1.pib > carta2.pib) printf("carta 1 venceu!\n");
    else if (carta1.pib < carta2.pib) printf("carta 2 venceu!\n");
    else printf("Empate!\n");
    
    // Comparando Pontos Turísticos
    printf("Comparando Pontos Turísticos:\n");
    if (carta1.pontosTuristicos > carta2.pontosTuristicos) printf("carta 1 venceu!\n");
    else if (carta1.pontosTuristicos < carta2.pontosTuristicos) printf("carta 2 venceu!\n");
    else printf("Empate!\n");

    // Comparando Densidade Populacional
    printf("Comparando Densidade Populacional:\n"); // Densidade Populacional é população dividida pela área
    carta1.DensidadePopulacional = carta1.populacao / carta1.area; // Calculo da densidade populacional da carta1
    carta2.DensidadePopulacional = carta2.populacao / carta2.area; // Calculo da densidade populacional da carta2
    if (carta1.DensidadePopulacional < carta2.DensidadePopulacional) printf("carta 1 venceu!\n");
    else if (carta1.DensidadePopulacional > carta2.DensidadePopulacional) printf("carta 2 venceu!\n");
    else printf("Empate!\n");

    printf("Comparando PIB per Capita:\n"); // PIB per Capita é PIB dividido pela população
    carta1.PIBperCapita = (carta1.pib * 1e9) / carta1.populacao; // Calculo do PIB per capita da carta1
    carta2.PIBperCapita = (carta2.pib * 1e9) / carta2.populacao; // Calculo do PIB per capita da carta2
    if (carta1.PIBperCapita > carta2.PIBperCapita) printf("carta 1 venceu!\n");
    else if (carta1.PIBperCapita < carta2.PIBperCapita) printf("carta 2 venceu!\n");
    else printf("Empate!\n");
    
    printf("Comparando Super Poder:\n"); // Super Poder é a soma de todos os atributos
    carta1.SuperPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + carta1.DensidadePopulacional + carta1.PIBperCapita; // Calculo do super poder da carta1
    carta2.SuperPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + carta2.DensidadePopulacional + carta2.PIBperCapita; // Calculo do super poder da carta2
    if (carta1.SuperPoder > carta2.SuperPoder) printf("carta 1 venceu!\n");
    else if (carta1.SuperPoder < carta2.SuperPoder) printf("carta 2 venceu!\n");
    else printf("Empate!\n");

    printf("==============================\n");
}

int main() { // Função principal
    // Exemplo de cartas
    Carta carta1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50, 0.0, 0.0, 0.0}; // Primeira carta
    Carta carta2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30, 0.0, 0.0, 0.0}; // Segunda carta

    printf("-----------Carta 01-----------\n");
    mostrarCarta(carta1); // Mostra a primeira carta

    printf("-----------Carta 02-----------\n");
    mostrarCarta(carta2); // Mostra a segunda carta

    compararCartas(carta1, carta2); // Compara as duas cartas

    return 0;
}
