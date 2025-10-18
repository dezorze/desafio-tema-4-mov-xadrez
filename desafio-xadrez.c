# include <stdio.h>

int main() {
    //nesse codigo, um for dentro de um while reproduz o mov do cavalo
    int movimento = 1;
    // esse while(movimento--) é intessante: enquanto movimento for true (1) ele decrementa.
    while(movimento--) {
        printf("Movimento do Cavalo:\n");
        for(int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    // Os proximos fors simulam os movimentos das outras pecas.
    printf("\nMovimento da Torre:\n");
    for(int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    for(int i = 0; i < 5; i++){
        printf("Cima\n");
        printf("Direita\n");

    }

    printf("\nMovimento da Rainha:\n");
    for(int i = 0; i < 8; i++){
        printf("Esquerda\n");

    }

    return 0;
}