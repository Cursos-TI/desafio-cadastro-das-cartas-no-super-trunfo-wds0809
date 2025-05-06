#include <stdio.h> 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Declaração das variáveis para armazenar os dados das cartas

    char estadoC1;
    char estadoC2;
    char codCartaC1[10];
    char codCartaC2[10]; // Código das cartas (ex: 01, 02, etc.)
    char nomeC1[50]; // Nome da cidade C1
    char nomeC2[50]; // Nome da cidade C2
    int populacaoC1, nPontosC1, populacaoC2, nPontosC2; // Valores inteiros das cidades
    float areaC1, pibC1, areaC2, pibC2; // Valores decimais: área e PIB
    float densidadeC1, densidadeC2;
    float pibPerCapitaC1, pibPerCapitaC2;
    float superPoderC1, superPoderC2;

    // Comparar as Cartas
    
    int comparacaoPopulacao;
    int comparacaoArea;
    int comparacaoPib;
    int comparacaoPontosTuristicos;
    int comparacaoDensidade;
    int comparacaoPibPerCapita;
    int comparacaoSuperPoder;
     
    printf ("Digite uma letra de A a H para representação de um estado para Carta 1: \n");
    scanf (" %c", &estadoC1); // O espaço antes do %c evita problemas com \n no buffer

    printf ("Digite o código da carta de 01 a 04: \n");
    scanf ("%s", codCartaC1);
    
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nomeC1);

    printf ("Digite o número de habitantes da cidade: \n");
    scanf ("%d", &populacaoC1);

    printf ("Digite a área total da cidade: \n");
    scanf ("%f", &areaC1);

    // Densidade Populacional Carta 1
    densidadeC1 = populacaoC1 / areaC1;
    
    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &pibC1);

    // Pib per Capita Carta 1
    pibPerCapitaC1 = (pibC1 * 1000000000) / populacaoC1; //Para usar PIB em bilhões e calcular corretamente, multiplique por 1.000.000.000 no cálculo
    
    printf ("Digite quantos pontos turísticos existe na cidade: \n");
    scanf ("%d", &nPontosC1);

    // Super poder
    superPoderC1 = populacaoC1 + areaC1 + pibC1 + (1 / pibPerCapitaC1) + nPontosC1;

    printf ("Digite uma letra de A a H para representação de um estado para Carta 2: \n");
    scanf (" %c", &estadoC2); // O espaço antes do %c evita problemas com \n no buffer

    printf ("Digite o código da carta de 01 a 04: \n");
    scanf ("%s", codCartaC2);
    
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nomeC2);

    printf ("Digite o número de habitantes da cidade: \n");
    scanf ("%d", &populacaoC2);

    printf ("Digite a área total da cidade: \n");
    scanf ("%f", &areaC2);

    // Densidade Populacional Carta 1
    densidadeC2 = populacaoC2 / areaC2;

    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &pibC2);

    // Pib per Capita Carta 2
    pibPerCapitaC2 = (pibC2 * 1000000000) / populacaoC2; //Para usar PIB em bilhões e calcular corretamente, multiplique por 1.000.000.000 no cálculo

    printf ("Digite quantos pontos turísticos existe na cidade: \n");
    scanf ("%d", &nPontosC2);

    // Super poder
    superPoderC2 = populacaoC2 + areaC2 + pibC2 + (1 / pibPerCapitaC2) + nPontosC2;

    // Comparação
    comparacaoPopulacao = populacaoC1 > populacaoC2;
    comparacaoArea = areaC1 > areaC2;
    comparacaoPib = pibC1 > pibC2;
    comparacaoPontosTuristicos = nPontosC1 > nPontosC2;
    comparacaoDensidade = densidadeC1 < densidadeC2; // Densidade populacional, a carta com o menor valor vence
    comparacaoPibPerCapita = pibPerCapitaC1 > pibPerCapitaC2;
    comparacaoSuperPoder = superPoderC1 > superPoderC2;

    // Resultados das Cartas

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estadoC1);
    printf("Código: %c%s\n", estadoC1, codCartaC1); // Combina o estado (letra) com o código da carta para gerar algo como A01
    printf("Nome da Cidade: %s\n", nomeC1);
    printf("População: %d habitantes \n", populacaoC1);
    printf("Área: %.2f km²\n", areaC1); // Usa %.2f para mostrar 2 casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pibC1); // Usa %.2f para mostrar 2 casas decimais.
    printf("Número de Pontos Turísticos: %d\n", nPontosC1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeC1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaC1);
    printf("Super Poder: %.2f pontos\n", superPoderC1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estadoC2);
    printf("Código: %c%s\n", estadoC2, codCartaC2); // Combina o estado (letra) com o código da carta para gerar algo como A01
    printf("Nome da Cidade: %s\n", nomeC2);
    printf("População: %d habitantes\n", populacaoC2);
    printf("Área: %.2f km²\n", areaC2); // Usa %.2f para mostrar 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pibC2); // Usa %.2f para mostrar 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", nPontosC2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeC2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaC2);
    printf("Super Poder: %.2f pontos\n", superPoderC2);

    // Imprimir Comparação de Cartas
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: %d\n", comparacaoPopulacao);
    printf("Área: %d\n", comparacaoArea);
    printf("PIB: %d\n", comparacaoPib);
    printf("Pontos Turísticos: %d\n", comparacaoPontosTuristicos);
    printf("Densidade Populacional: %d\n", comparacaoDensidade);
    printf("PIB per Capita: %d\n", comparacaoPibPerCapita);
    printf("Super Poder: %d\n", comparacaoSuperPoder);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
