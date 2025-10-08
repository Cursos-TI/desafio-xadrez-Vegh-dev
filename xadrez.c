#include <stdio.h>
//Lógica de movimentação do bispo utilizando Loops aninhados para simular seu movimento diagonal.
void moverbispo(int casasbispo) {
    for (int i = 1; i <= casasbispo; i++) {
        for (int j = 1; j <= 2; j++) { 
            if (j == 1) {
                printf("Cima,");
            } else {
                printf("Direita\n");
            }
        }
    }
}

//Lógica de movimentação da Torre utilizando a recursividade para gerar a movimentação horizontal.
void movertorre(int casastorre){
    if (casastorre > 0){
        printf("Direita\n");
        movertorre(casastorre - 1);
    }
}
//Lógica de movimentação da Rainha, que como a torre, utiliza a recursividade para sua movimentação.
void moverRainha(int casasrainha) {
    do {
        printf("Esquerda\n");
        casasrainha++; 
    } while (casasrainha <= 8);
    
    
}
int main() {
    // Implementação de Movimentação do Bispo
       printf("Os movimentos do Bispo são:\n");
       moverbispo(5);

       
    // Implementação de Movimentação da Torre
        printf("Os movimentos da Torre são:\n");
        movertorre(5);
        

    // Implementação de Movimentação da Rainha
        printf("Os movimentos da Rainha sao:\n");
        moverRainha(1);
    
    // Implementação de Movimentação do Cavalo
    /*A lógica na movimentação do cavalo foi utilizar um Loop complexo com um while aninhado para simular sua movimentação em "L". 
     Para que isso fosse possivel incrementos e decremetos foram usados para que a iteração acontecesse somente uma vez e sequencialmente.*/
        printf("Os movimentos do Cavalo são:\n");
        for (int cavalo= 0, cavalo2 = 3; cavalo < cavalo2; cavalo++,cavalo2--){
            printf("Cima\n",cavalo,cavalo2);
        while(cavalo >=1){
            printf("Direita\n");
            cavalo--;
        }
    }
return 0;
}