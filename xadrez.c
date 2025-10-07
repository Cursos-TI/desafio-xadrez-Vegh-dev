#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
        int torre = 0,bispo = 0, rainha;

    // Implementação de Movimentação do Bispo
        printf("Os movimentos do Bispo são:\n");
            do {
                printf("Cima,Direita\n",bispo);
                bispo++; 
            }while (bispo <= 5);
            {  
            }

       
    // Implementação de Movimentação da Torre
        printf ("Os movimentos da Torre são:\n");
            while (torre <=5)
            {
                printf("Direita \n",torre);
                torre++;
            }

    // Implementação de Movimentação da Rainha
        printf("Os movimentos da Rainha são:\n");
            for (rainha = 1; rainha <=8; rainha++)
            {
                printf("Esquerda\n",rainha);
            }       

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
