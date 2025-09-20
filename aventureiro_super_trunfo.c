#include <stdio.h>

typedef struct { // Estrutura para representar uma carta
    char estado;                 // Ex: 'A' a 'H'
    char codigo[4];              // Ex: "A01" (precisa de espaço para '\0')
    char nomeCidade[50];         // Nome da cidade
    int populacao;               // Habitantes
    float area;                  // Km²
    float pib;                   // PIB
    int pontosTuristicos;        // Quantidade de pontos turísticos
    float DensidadePopulacional; // Habitantes por Km²
    float PIBperCapita;         // PIB per capita
} Carta; // Definição da estrutura Carta

void mostrarCarta(Carta c) { // Função para mostrar os atributos da carta
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
    printf("------------------------------\n\n"); // Linha de separação
}

void esperarEnter() { // Função para esperar o jogador apertar ENTER
    printf("Pressione ENTER para continuar...\n"); // mensagem para o jogador
    while (getchar() != '\n'); // espera o ENTER
}

int main() { // Função principal
    // Exemplo de cartas
    Carta carta1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50, 0.0, 0.0}; // Primeira carta
    Carta carta2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30, 0.0, 0.0}; // Segunda carta

    printf("-----------Carta 01-----------\n");
    mostrarCarta(carta1); // Mostra a primeira carta

    esperarEnter();  // espera o jogador apertar ENTER

    printf("-----------Carta 02-----------\n");
    mostrarCarta(carta2); // Mostra a segunda carta

    esperarEnter();  // espera novamente

    return 0; // Fim do programa
}
