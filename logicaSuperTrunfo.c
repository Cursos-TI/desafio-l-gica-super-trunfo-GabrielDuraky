#include <stdio.h>

int main() {
    
    // Declaração de variáveis da Carta 
    
    unsigned long int populacao, populacao2;
    int total_carta1, total_carta2;
    int opcaoUsada[6] = {0, 0, 0, 0 , 0, 0}; // array de flags
    int opcao, opcao2;
    int turismo, turismo2;
    char codigo[3], codigo2[3];
    float area, area2;
    float PIBCapita, PIBCapita2;
    float densidade, densidade2;
    float densidadeinver, densidadeinver2;
    float PIB, PIB2;
    float SuperPoder, SuperPoder2;
    float soma_carta1, soma_carta2;
    float Carta1, Carta2;
    char Carta_1, Carta_2;
    char cidade[40], cidade2[40];
    char estado[40], estado2[40];
    
    // Bloco referente a entrada de dados

    printf("Digite o nome de um estado de A a H: "); 
    scanf("%s", estado); // Linha referente a variável estado
     if (estado[0] != 'A' && estado[0] != 'B' && estado[0] != 'C' && estado[0] != 'D' &&
         estado[0] != 'E' && estado[0] != 'F' && estado[0] != 'G' && estado[0] != 'H' &&
         estado[0] != 'a' && estado[0] != 'b' && estado[0] != 'c' && estado[0] != 'd' &&
         estado[0] != 'e' && estado[0] != 'f' && estado[0] != 'g' && estado[0] != 'h') {
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
        estado2[0] != 'E' && estado2[0] != 'F' && estado2[0] != 'G' && estado2[0] != 'H' &&
        estado2[0] != 'a' && estado2[0] != 'b' && estado2[0] != 'c' && estado2[0] != 'd' &&
        estado2[0] != 'e' && estado2[0] != 'f' && estado2[0] != 'g' && estado2[0] != 'h') {
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
    if (opcaoUsada[0] == 0){
    printf("1. Estado\n");
    }
    if (opcaoUsada[1] == 0) {
    printf("2. População\n");
    }
    if (opcaoUsada[2] == 0) {
    printf("3. Área\n");
    }
    if (opcaoUsada[3] == 0) {
    printf("4. PIB\n");
    }
    if (opcaoUsada[4] == 0) {
    printf("5. Pontos Turísticos\n");
    }
    if (opcaoUsada[5] == 0) {
    printf("6. Densidade Demográfica\n");
    }
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    // Marcação da primeira opção escolhida como usada
    if (opcao >= 1 && opcao <= 6) {
        opcaoUsada[opcao - 1] = 1;
    }
    
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
           } else if (populacao == populacao2) {
            printf("Empate!\n");
           } else {
            printf("Carta 2 venceu!");
           }
        break;

        case 3:
           printf("Área da Carta 1: %.2f\n", area);
           printf("Área da Carta 2: %.2f\n", area2);
           if (area > area2) {
            printf("Carta 1 venceu!\n");
           } else if (area == area2) {
            printf("Empate!\n");
           } else {
            printf("Carta 2 venceu\n");
           }
        break;

        case 4:
           printf("O PIB da Carta 1 é: %.2f\n", PIB);
           printf("O PIB da Carta 2 é: %.2f\n", PIB2);
           if (PIB > PIB2) {
            printf("Carta 1 venceu!\n");
           } else if (PIB == PIB2) {
            printf("Empate!\n");
           } else {
            printf("Carta 2 venceu!\n");
           }
        break;

        case 5:
           printf("Pontos turísticos da Carta 1: %d\n", turismo);
           printf("Pontos turísticos da Carta 2: %d\n", turismo2);
           if (turismo > turismo2) {
            printf("Carta 1 venceu!\n");
           } else if (turismo == turismo2) {
            printf("Empate!\n");
           } else {
            printf("Carta 2 venceu!\n");
           }
        break;

        case 6:
           printf("Densidade demográfica da Carta 1: %.2f\n", densidade);
           printf("Densidade demográfica da Carta 2: %.2f\n", densidade2);
           if (densidade < densidade2) {
            printf("Carta 1 venceu!\n");
           } else if (densidade == densidade2) {
            printf("Empate!\n");
           } else {
            printf("Carta 2 venceu!\n");
           }
        break;

        default:
           printf("Selecione uma opção válida!\n");
    }

    printf("Por favor, selecione um atributo a ser comparado:\n");
    if (opcaoUsada[0] == 0){
    printf("1. Estado\n");
    }
    if (opcaoUsada[1] == 0) {
    printf("2. População\n");
    }
    if (opcaoUsada[2] == 0) {
    printf("3. Área\n");
    }
    if (opcaoUsada[3] == 0) {
    printf("4. PIB\n");
    }
    if (opcaoUsada[4] == 0) {
    printf("5. Pontos Turísticos\n");
    }
    if (opcaoUsada[5] == 0) {
    printf("6. Densidade Demográfica\n");
    }
    printf("Digite sua opção: ");
    scanf("%d", &opcao2);

    // Marcação da primeira opção escolhida como usada
    if (opcao2 >= 1 && opcao2 <= 6) {
        opcaoUsada[opcao2 - 1] = 1;
    }


    switch (opcao2) {
        case 1:
           printf("O Estado da Carta 1 é: %s\n", estado);
           printf("O Estado da Carta 2 é: %s\n", estado2);
        break;

        case 2:
           printf("População Carta 1: %lu\n", populacao);
           printf("População Carta 2: %lu\n", populacao2);
           if (populacao > populacao2) {
            printf("Carta 1 venceu!\n");
           } else if (populacao == populacao2) {
            printf("Empate!\n");
           } else {
            printf("Carta 2 venceu!");
           }
        break;

        case 3:
           printf("Área da Carta 1: %.2f\n", area);
           printf("Área da Carta 2: %.2f\n", area2);
           if (area > area2) {
            printf("Carta 1 venceu!\n");
           } else if (area == area2) {
            printf("Empate!\n");
           } else {
            printf("Carta 2 venceu\n");
           }
        break;

        case 4:
           printf("O PIB da Carta 1 é: %.2f\n", PIB);
           printf("O PIB da Carta 2 é: %.2f\n", PIB2);
           if (PIB > PIB2) {
            printf("Carta 1 venceu!\n");
           } else if (PIB == PIB2) {
            printf("Empate!\n");
           } else {
            printf("Carta 2 venceu!\n");
           }
        break;

        case 5:
           printf("Pontos turísticos da Carta 1: %d\n", turismo);
           printf("Pontos turísticos da Carta 2: %d\n", turismo2);
           if (turismo > turismo2) {
            printf("Carta 1 venceu!\n");
           } else if (turismo == turismo2) {
            printf("Empate!\n");
           } else {
            printf("Carta 2 venceu!\n");
           }
        break;

        case 6:
           printf("Densidade demográfica da Carta 1: %.2f\n", densidade);
           printf("Densidade demográfica da Carta 2: %.2f\n", densidade2);
           if (densidade < densidade2) {
            printf("Carta 1 venceu!\n");
           } else if (densidade == densidade2) {
            printf("Empate!\n");
           } else {
            printf("Carta 2 venceu!\n");
           }
        break;

        default:
           printf("Selecione uma opção válida!\n");
    }

    // Tabela de variáveis 
    int valor_escolha1, valor_escolha2; 
    if (opcao == 2) {
        valor_escolha1 = populacao;
    } else if (opcao == 3) {
        valor_escolha1 = area;
    } else if (opcao == 4) {
        valor_escolha1 = PIB; 
    } else if (opcao == 5) {
        valor_escolha1 = turismo;
    } else {
        valor_escolha1 = densidade;
    }
    
    if (opcao2 == 2) {
        valor_escolha2 = populacao;
    } else if (opcao2 == 3) {
        valor_escolha2 = area;
    } else if (opcao2 == 4) {
        valor_escolha2 = PIB;
    } else if (opcao2 == 5) {
        valor_escolha2 = turismo;
    } else {
        valor_escolha2 = densidade;
    }
    
    int escolha1, escolha2;
    if (opcao == 2) {
        escolha1 = populacao2;
    } else if (opcao == 3) {
        escolha1 = area2;
    } else if (opcao == 4) {
        escolha1 = PIB2; 
    } else if (opcao == 5) {
        escolha1 = turismo2;
    } else {
        escolha1 = densidade2;
    }

    if (opcao2 == 2) {
        escolha2 = populacao2;
    } else if (opcao2 == 3) {
        escolha2 = area2;
    } else if (opcao2 == 4) {
        escolha2 = PIB2; 
    } else if (opcao2 == 5) {
        escolha2 = turismo2;
    } else {
        escolha2 = densidade2;
    }

    printf("Soma dos atributos:\n");
    printf("O Estado da Carta 1 é: %s\n", estado);
    printf("O Estado da Carta 2 é: %s\n", estado2 );

    if (opcao == 1) {
        printf("Atributo escolhido da Carta 1 é Estado: %s\n", estado);
    } else if (opcao == 2) {
        printf("Atributo escolhido da Carta 1 é População: %lu\n", populacao);
    } else if (opcao == 3) {
        printf("Atributo escolhido da Carta 1 é Área: %.2f\n", area);
    } else if (opcao == 4) {
        printf("Atributo escolhido da Carta 1 é PIB: %.2f\n", PIB);
    } else if (opcao == 5) {
        printf("Atributo escolhido da Carta 1 é Turismo: %d\n", turismo);
    } else {
        printf("Atributo escolhido da Carta 1 é Densidade: %.2f\n", densidade);
    }

    if (opcao2 == 1) {
        printf("Atributo escolhido da Carta 2 é Estado: %s\n", estado2);
    } else if (opcao2 == 2) {
        printf("Atributo escolhido da Carta 2 é População: %lu\n", populacao2);
    } else if (opcao2 == 3) {
        printf("Atributo escolhido da Carta 2 é Área: %.2f\n", area2);
    } else if (opcao2 == 4) {
        printf("Atributo escolhido da Carta 2 é PIB: %.2f\n", PIB2);
    } else if (opcao2 == 5) {
        printf("Atributo escolhido da Carta 2 é Turismo: %d\n", turismo2);
    } else {
        printf("Atributo escolhido da Carta 2 é Densidade: %.2f\n", densidade2);
    }

    if (opcao == 1 || opcao2 == 1) {
        printf("Um dos atributos não podem ser somados\n");
    } else {
        soma_carta1 = valor_escolha1 + valor_escolha2;
        soma_carta2 = escolha1 + escolha2; 
        printf("Soma da Carta 1: %.2f\n", soma_carta1);
        printf("Soma da Carta 2: %.2f\n", soma_carta2);

        if (soma_carta1 == soma_carta2) {
            printf("Empate!\n");
        } else if (soma_carta1 > soma_carta2)  {
            printf("Carta 1 venceu!\n");
        } else {
            printf("Carta 2 venceu!\n");
        }
        
    }
    
return 0;
}
