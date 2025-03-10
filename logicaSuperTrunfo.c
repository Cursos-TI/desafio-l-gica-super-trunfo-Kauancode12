#include <stdio.h>

int main(){

    //Declara as variaveis
    char estado[10] = "RJ", estado2[10] = "SP";
    char codigo[5] = "A01", codigo2[5] = "B01";
    char cidade[20] = "Rio de Janeiro", cidade2[20] = "São Paulo";

    unsigned long int populacao = 3500000, populacao2 = 4000000; int escolhaJogador, escolha2Jogador, resultado1, resultado2;

    int pontos_turisticos = 30, pontos_turisticos2 = 15;

    float area = 2500000, area2 = 2800000;

    float pib = 1500000000, pib2 = 1400000000;

    float densidade_populacional, densidade_populacional2;

    float pib_per_capita, pib_per_capita2;

    float super_poder, super_poder2;

    
    //Operações que declaram uma nova variavel a partir da divisão do valor de outras e forçam o resultado da divisão a adotar o tipo float
    densidade_populacional = (float)populacao / area;

    pib_per_capita = (float)pib / populacao;

    super_poder = (float)(populacao + area + pib + pontos_turisticos + pib_per_capita) + (1 / densidade_populacional);

    //Printf exibe na tela todas as informações referente a carta 01
    printf("Carta 01: \n");
    printf("Nome do Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População total: %lu\n", populacao);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    printf("Área em km²: %f\n", area);
    printf("PIB total: %f\n", pib);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);
    printf("Super Poder: %.3f\n\n", super_poder);

    

    //Operações que declaram uma nova variavel a partir da divisão do valor de outras e forçam o resultado da divisão a adotar o tipo float
    densidade_populacional2 = (float)populacao2 / area2;

    pib_per_capita2 = (float)pib2 / populacao2;

    super_poder2 = (float)(populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2) + (1 / densidade_populacional2);


    //Printf exibe na tela todas as informações referente a carta 02
    printf("Carta 02: \n");
    printf("Nome do Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População total: %lu\n", populacao2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Área em km²: %f\n", area2);
    printf("PIB total: %f\n", pib2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.3f\n\n", super_poder2);

    printf("*** Seja bem vindo ao super trunfo ***\n");
    printf("Para começar escolha o primeiro atributo para comparação\n");
    printf("1.População\n");
    printf("2.pontos turísticos\n");
    printf("3.Área em km²\n");
    printf("4.PIB\n");
    printf("5.Densidade populacional\n");
    printf("6.PIB per capita\n");
    printf("7.Superpoder\n");
    scanf("%d", &escolhaJogador);

    //Escolhe um dos cases de acordo com o numero digitado pelo jogador
    //compara os valores e indica quem venceu por meio de uma condição estabelecida
    switch(escolhaJogador)
    {
    case 1:
        printf("Cidades: %s x %s\n População: %lu x %lu\n\n", cidade, cidade2, populacao, populacao2);
        resultado1 = populacao > populacao2 ? 1 : 0;
        break;

    case 2:
        printf("Cidades: %s x %s\n Pontos turísticos: %d x %d\n\n", cidade, cidade2, pontos_turisticos, pontos_turisticos2);
        resultado1 = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
        
        break;
    case 3:
        printf("Cidades: %s x %s\n Área em km²: %f x %f\n\n", cidade, cidade2, area, area2);
        resultado1 = area > area2 ? 1 : 0;
    break;
    case 4:
        printf("Cidade: %s x %s\n PIB: %f x %f\n\n", cidade, cidade2, pib, pib2);
        resultado1 = pib > pib2 ? 1 : 0;
    break;
    case 5:
        printf("Cidade: %s x %s\n Densidade populacional: %f x %f\n\n", cidade, cidade2, densidade_populacional, densidade_populacional2);
        resultado1 = densidade_populacional < densidade_populacional2 ? 1 : 0;
    break;
    case 6:
        printf("Cidade: %s x %s\n PIB per capita: %f x %f\n\n", cidade, cidade2, pib_per_capita, pib_per_capita2);
        resultado1 = pib_per_capita > pib_per_capita2 ? 1 : 0;
    break;
    case 7:
        printf("Cidade: %s x %s\n Superpoder: %f x %f\n\n", cidade, cidade2, super_poder, super_poder2);
        resultado1 = super_poder > super_poder2;
    break;
    default:
    printf("Opção inválida\n");
    break;
    }

    printf("Escolha o segundo atributo para comparação\n");
    printf("1.População\n");
    printf("2.pontos turísticos\n");
    printf("3.Área em km²\n");
    printf("4.PIB\n");
    printf("5.Densidade populacional\n");
    printf("6.PIB per capita\n");
    printf("7.Superpoder\n");
    scanf("%d", &escolha2Jogador);

    if (escolhaJogador == escolha2Jogador)
    {
        printf("Você escolheu o mesmo atributo, tente novamente.\n\n");
    } else {
        switch(escolha2Jogador)
        {case 1:
            printf("Cidades: %s x %s\n População: %lu x %lu\n\n", cidade, cidade2, populacao, populacao2);
            resultado2 = populacao > populacao2 ? 1 : 0;
            break;
    
        case 2:
            printf("Cidades: %s x %s\n Pontos turísticos: %d x %d\n\n", cidade, cidade2, pontos_turisticos, pontos_turisticos2);
            resultado2 = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
            
            break;
        case 3:
            printf("Cidades: %s x %s\n Área em km²: %f x %f\n\n", cidade, cidade2, area, area2);
            resultado2 = area > area2 ? 1 : 0;
        break;
        case 4:
            printf("Cidade: %s x %s\n PIB: %f x %f\n\n", cidade, cidade2, pib, pib2);
            resultado2 = pib > pib2 ? 1 : 0;
        break;
        case 5:
            printf("Cidade: %s x %s\n Densidade populacional: %f x %f\n\n", cidade, cidade2, densidade_populacional, densidade_populacional2);
            resultado2 = densidade_populacional < densidade_populacional2 ? 1 : 0;
        break;
        case 6:
            printf("Cidade: %s x %s\n PIB per capita: %f x %f\n\n", cidade, cidade2, pib_per_capita, pib_per_capita2);
            resultado2 = pib_per_capita > pib_per_capita2 ? 1 : 0;
        break;
        case 7:
            printf("Cidade: %s x %s\n Superpoder: %f x %f\n\n", cidade, cidade2, super_poder, super_poder2);
            resultado2 = super_poder > super_poder2;
        break;
        default:
        printf("Opção inválida\n");
        break;
    
        }

        if (resultado1 && resultado2)
        {
            printf("Parabéns, você venceu!\n");

        } else if (resultado1 != resultado2){
            printf("Empatou!\n");
        } else {
            printf("Infelizmente, você perdeu.\n");
        }
    }
    //Esse programa funciona como um jogo de cartas simples

    return 0;
}