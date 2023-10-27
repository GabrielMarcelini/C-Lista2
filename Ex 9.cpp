#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMatriz(int m[][100], int linhas, int cols) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++)
            printf("%3d |", m[i][j]);
        printf("\n");
    }
    printf("\n");
}

void geraMatriz(int m[][100], int linhas, int cols) {
    int i, j;
    srand(time(NULL));
    for (i = 0; i < linhas; i++)
        for (j = 0; j < cols; j++)
            m[i][j] = rand() % 50;
}

void leiaMatriz(int m[][100], int linhas, int cols) {
    int i, j;
    for (i = 0; i < linhas; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &m[i][j]);
}

int main() {
    int linhas = 2, cols = 3;
    int M[100][100], N[100][100], Mult[100][100];

    printf("Digite os valores da matriz M (2x3):\n");
    leiaMatriz(M, linhas, cols);

    printf("Digite os valores da matriz N (3x2):\n");
    leiaMatriz(N, cols, 2);

    int i, j, k;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < 2; j++) {
            Mult[i][j] = 0;
            for (k = 0; k < cols; k++) {
                Mult[i][j] += M[i][k] * N[k][j];
            }
        }
    }

    printf("Resultado da multiplicacao das matrizes M e N (2x2):\n");
    printMatriz(Mult, linhas, 2);

    return 0;
}

