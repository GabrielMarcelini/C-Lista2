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
    srand(time(NULL));
    for (i = 0; i < linhas; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &m[i][j]);
}


void multiplicaPorEscalar(int m[][100], int linhas, int cols, int escalar) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            m[i][j] *= escalar;
        }
    }
}

int main() {
    int linhas, cols, escalar;
    printf("Digite o numero de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &cols);

    int matriz[100][100];

    printf("Digite o valor do escalar: ");
    scanf("%d", &escalar);

    printf("Preencha a matriz:\n");
    leiaMatriz(matriz, linhas, cols);

    printf("Matriz original:\n");
    printMatriz(matriz, linhas, cols);

    multiplicaPorEscalar(matriz, linhas, cols, escalar);

    printf("Matriz multiplicada pelo escalar:\n");
    printMatriz(matriz, linhas, cols);

    return 0;
}

