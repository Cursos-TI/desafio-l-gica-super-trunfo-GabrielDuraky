#include <stdio.h>

int main() {
    
    // Declaração de variáveis da Carta 
    
    unsigned long int populacao;
    unsigned long int populacao2;
    int opcao;
    int turismo;
    int turismo2;
    char codigo[3];
    char codigo2[3];
    float area;
    float area2;
    float PIBCapita;
    float PIBCapita2;
    float densidade;
    float densidade2;
    float densidadeinver;
    float densidadeinver2;
    float PIB;
    float PIB2;
    float SuperPoder;
    float SuperPoder2;
    char cidade[40];
    char cidade2[40];
    char estado[40];
    char estado2[40];
    
    // Bloco referente a entrada de dados

    printf("Digite o nome de um estado de A a H: "); 
    scanf("%s", estado); // Linha referente a variável estado
     if (estado[0] != 'A' && estado[0] != 'B' && estado[0] != 'C' && estado[0] != 'D' &&
        estado[0] != 'E' && estado[0] != 'F' && estado[0] != 'G' && estado[0] != 'H') {
            printf("Opção invalida\n");
            return 1; // Encerra o programa caso a entrada não for adequada
        }

    printf("Digite o nome de uma cidade: ");
    scanf("%s", cidade); // Linha referente a variável cidade

    printf("Digite o código da Carta (estado + um número de 01 a 04): ");
    scanf("%s", codigo); // Linha referente ao código da carta

    printf("Digite a população dessa cidade: ");
    scanf("%lu", &populacao); // Linha referente a população

    printf("Digite a área dessa cidade: ");
    scanf("%f", &area); // Linha referente a área

    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &PIB); // Referente ao PIB

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &turismo);
    
    // Bloco referente a saída de dados

    printf("Carta 1\n"); // Identificação da carta
    
    printf("Estado: %s\n", estado); // Saída do Estado
    
    printf("Código: %s\n", codigo); // Saída do código com letras e números

    printf("Cidade: %s\n", cidade); // Saída da cidade

    printf("População: %lu\n", populacao); // Saída da população

    printf("Área: %.2fkm²\n", area); // Saída da área em km²

    printf("PIB: R$%.2f\n", PIB); // Saída do PIB

    printf("Pontos Turisticos: %d\n", turismo); // Saída de turismo

    // Parte referente a cálculo

    if (area != 0.0) {
        densidade = populacao /area;
    } else {
        densidade = 0;
    }
    
    // Cálculo do inverso populacional
    if (populacao != 0.0) {
        densidadeinver = 1.0 / populacao;
    } else {
        densidadeinver = 0;
    }
    
    // Cálculo produto interno bruto per capita
    if (populacao != 0.0) {
        PIBCapita = (PIB * 1000000000) / (float)populacao;
    } else {
        PIBCapita = 0;
    }

    // Cálculo do super poder
    if (populacao != 0.0) {
         SuperPoder = (populacao + area + PIB + turismo + PIBCapita + densidadeinver);
    } else {
        SuperPoder = 0;
    }

    printf("Densidade Populacional: %.2f\n", densidade); // Saída de Densidade

    printf("PIB per Capita: R$%.2f\n", PIBCapita); // Saída PIB per Capita

    printf("Super Poder: %.2f\n", SuperPoder);

    // bloco de código da segunda carta
    
    printf("Digite o nome de um estado de A a H: "); 
    scanf("%s", estado2); // Linha referente a variável estado
    if (estado2[0] != 'A' && estado2[0] != 'B' && estado2[0] != 'C' && estado2[0] != 'D' &&
        estado2[0] != 'E' && estado2[0] != 'F' && estado2[0] != 'G' && estado2[0] != 'H') {
            printf("Opção invalida\n");
            return 1; // Encerra o programa caso a entrada não for adequada
        }

    printf("Digite o nome de uma cidade: ");
    scanf("%s", cidade2); // Linha referente a variável cidade

    printf("Digite o código da Carta (estado + um número de 01 a 04): ");
    scanf("%s", codigo2); // Linha referente ao código da carta

    printf("Digite a população dessa cidade: ");
    scanf("%lu", &populacao2); // Linha referente a população

    printf("Digite a área dessa cidade: ");
    scanf("%f", &area2); // Linha referente a área

    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &PIB2); // Referente ao PIB

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &turismo2);

    // Bloco referente a saída de dados da carta 2

    printf("Carta 2\n"); // Identificação da carta
    
    printf("Estado: %s\n", estado2); // Saída do Estado
    
    printf("Código: %s\n", codigo2); // Saída do código com letras e números

    printf("Cidade: %s\n", cidade2); // Saída da cidade

    printf("População: %lu\n", populacao2); // Saída da população

    printf("Área: %.2fkm²\n", area2); // Saída da área em km²

    printf("PIB: R$%.2f\n", PIB2); // Saída do PIB

    printf("Pontos Turisticos: %d\n", turismo2); // Saída de turismo
    
    // Parte referente a cálculo
    
    // Cálculo de densidade populacional
    if (area != 0.0) {
        densidade2 = populacao2 /area2;
    } else {
        densidade2 = 0;
    }
    
    // Cálculo do inverso populacional
    if (populacao2 != 0.0) {
        densidadeinver2 = 1.0 / populacao2;
    } else {
        densidadeinver2 = 0;
    }
    
    // Cálculo produto interno bruto per capita
    if (populacao2 != 0.0) {
        PIBCapita2 = (PIB2 * 1000000000) / (float)populacao2;
    } else {
        PIBCapita2 = 0;
    }

    // Cálculo do super poder
    if (populacao2 != 0.0) {
         SuperPoder2 = (float)(populacao2 + area2 + PIB2 + turismo2 + PIBCapita2 + densidadeinver2);
    } else {
        SuperPoder2 = 0;
    }
    
    printf("Densidade Populacional: %.2f\n", densidade2); // Saída de Densidade

    printf("PIB per Capita: R$%.2f\n", PIBCapita2); // Saída PIB per Capita
    
    printf("Super Poder: %.2f\n", SuperPoder2);
    
    // Comparação de Cartas
 
    printf("** Comparação das Cartas: **\n");
    printf("Por favor, selecione um atributo a ser comparado:\n");
    printf("1. Estado\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Pontos Turísticos\n");
    printf("6. Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
           printf("O Estado da Carta 1 é: %s\n", estado);
           printf("O Estado da Carta 2 é: %s\n", estado2);
        break;

        case 2:
           printf("População Carta 1: %lu\n", populacao);
           printf("População Carta 2: %lu\n", populacao2);
           if (populacao > populacao2) {
            printf("Carta 1 venceu!\n");
           } else {
            printf("Carta 2 venceu!\n");
           }
        break;

        case 3:
           printf("Área da Carta 1: %.2f\n", area);
           printf("Área da Carta 2: %.2f\n", area2);
           if (area > area2) {
            printf("Carta 1 venceu!\n");
           } else {
            printf("Carta 2 venceu\n");
           }
        break;

        case 4:
           printf("O PIB da Carta 1 é: %.2f\n", PIB);
           printf("O PIB da Carta 2 é: %.2f\n", PIB2);
           if (PIB > PIB2) {
            printf("Carta 1 venceu!\n");
           } else {
            printf("Carta 2 venceu!\n");
           }
        break;

        case 5:
           printf("Pontos turísticos da Carta 1: %d\n", turismo);
           printf("Pontos turísticos da Carta 2: %d\n", turismo2);
           if (turismo > turismo2) {
            printf("Carta 1 venceu!\n");
           } else {
            printf("Carta 2 venceu!\n");
           }
        break;

        case 6:
           printf("Densidade demográfica da Carta 1: %.2f\n", densidade);
           printf("Densidade demográfica da Carta 2: %.2f\n", densidade2);
           if (densidade < densidade2) {
            printf("Carta 1 venceu!\n");
           } else {
            printf("Carta 2 venceu!\n");
           }
        break;

        default:
           printf("Selecione uma opção válida!\n");
    }
    
return 0;
}
