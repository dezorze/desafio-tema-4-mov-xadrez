# include <stdio.h>

// Usando recursividade:
void torre(int num) {
    if(num > 0) {
        printf("\n## Torre: Movimento com recursividade\n");
        printf("Direita\n");
        torre(num - 1);
    }
}

void bispo(int num) {
    if(num > 0) {
        printf("\n## Bispo: Movimento com recursividade\n");
        printf("Cima\n");
        printf("Direita\n");
        bispo(num - 1);
    }
}

void rainha(int num) {
    if(num > 0) {
        printf("\n## Rainha: Movimento com recursividade\n");
        printf("Esquerda\n");
        rainha(num - 1);
    }
}


void cavaloVertical(int num) {
    if(num > 0) {
        printf("Cima\n");
        cavaloVertical(num - 1);
    }
}

void cavaloHorizontal(int num) {
    if(num > 0) {
        printf("Esquerda\n");
        cavaloHorizontal(num - 1);
    }
}

void cavalo(int num) {
    if(num > 0) {
        printf("\n## Cavalo: Movimento com recursividade: \n");
        cavaloVertical(2);
        cavaloHorizontal(1);
        cavalo(num - 1);
    }
}



int main() {
    // //nesse codigo, um for dentro de um while reproduz o mov do cavalo
    // int movimento = 1;
    // // esse while(movimento--) é intessante: enquanto movimento for true (1) ele decrementa.
    // while(movimento--) {
    //     printf("Movimento do Cavalo:\n");
    //     for(int i = 0; i < 2; i++) {
    //         printf("Baixo\n");
    //     }
    //     printf("Esquerda\n");
    // }

    // // Os proximos fors simulam os movimentos das outras pecas.
    // printf("\nMovimento da Torre:\n");
    // for(int i = 0; i < 5; i++) {
    //     printf("Direita\n");
    // }

    // printf("\nMovimento do Bispo:\n");
    // for(int i = 0; i < 5; i++){
    //     printf("Cima\n");
    //     printf("Direita\n");

    // }

    // printf("\nMovimento da Rainha:\n");
    // for(int i = 0; i < 8; i++){
    //     printf("Esquerda\n");

    // }

    //Usando recursividade para simular o movimento das pecas:
    int n = 5;
    int n_cavalo = 1;
    torre(n);
    bispo(n);
    rainha(n);
    cavalo(n_cavalo);



    return 0;
}