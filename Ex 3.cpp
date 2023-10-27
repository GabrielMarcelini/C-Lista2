#include <stdio.h>

int main() {
    int N, M, X;

	//Solicite ao usuário o número de linhas e colunas da matriz
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &N);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &M);

    // Declare a matriz com tamanho N x M
    int matriz[N][M];

    // Preencha a matriz com valores inteiros
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Solicite ao usuário o valor X a ser contado
    printf("Digite o valor X a ser contado na matriz: ");
    scanf("%d", &X);

    // Conte quantas vezes X aparece na matriz
    int contador = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matriz[i][j] == X) {
                contador++;
            }
        }
    }

    // Apresente a matriz e o número de vezes que X aparece
    printf("Matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O valor %d aparece %d vezes na matriz.\n", X, contador);

    return 0;
}

