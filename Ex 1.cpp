#include <stdio.h>

int main() {
    int N, M;

    // Solicite ao usuário o número de linhas e colunas da matriz
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

    // Encontre o maior valor na matriz
    int maior = matriz[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    // Apresente a matriz e o maior valor
    printf("Matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O maior valor na matriz e: %d\n", maior);

    return 0;
}

