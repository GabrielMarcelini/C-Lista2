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

void leiaMatrizArquivo(int m[][100], int linhas, int cols) {
    FILE *arq;
    int i, j;
    arq = fopen("numeros.txt", "r");
    if (arq == NULL)
        printf("Arquivo nao encontrado\n");
    else {
        for (i = 0; i < linhas; i++) {
            for (j = 0; j < cols; j++) {
                fscanf(arq, "%d", &m[i][j]);
            }
        }
        fclose(arq);
    }
}

int somaMatrizes(int m1[][100], int m2[][100], int linhas, int cols, int resultado[][100]) {
    int i, j;

    // Verificar se as matrizes têm a mesma ordem
    if (linhas <= 0 || cols <= 0)
        return 0; // Matrizes inválidas

    // Calcular a soma das matrizes
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            resultado[i][j] = m1[i][j] + m2[i][j];
        }
    }

    return 1; // Operação bem-sucedida
}

int main() {
    int linhas, cols;
    printf("Digite o número de linhas e colunas das matrizes: ");
    scanf("%d %d", &linhas, &cols);

    int matriz1[100][100], matriz2[100][100], resultado[100][100];

    printf("Preencha a primeira matriz:\n");
    leiaMatriz(matriz1, linhas, cols);

    printf("Preencha a segunda matriz:\n");
    leiaMatriz(matriz2, linhas, cols);

    if (somaMatrizes(matriz1, matriz2, linhas, cols, resultado)) {
        printf("A soma das matrizes é:\n");
        printMatriz(resultado, linhas, cols);
    } else {
        printf("As matrizes não têm a mesma ordem. A soma não é possível.\n");
    }

    return 0;
}

