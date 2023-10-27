#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMatriz(float m[][100], int linhas, int cols) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++)
            printf("%.2f |", m[i][j]);
        printf("\n");
    }
    printf("\n");
}

void geraMatriz(float m[][100], int linhas, int cols) {
    int i, j;
    srand(time(NULL));
    for (i = 0; i < linhas; i++)
        for (j = 0; j < cols; j++)
            m[i][j] = (float)(rand() % 50) / 10.0; // Números reais entre 0 e 4.9
}

void leiaMatriz(float m[][100], int linhas, int cols) {
    int i, j;
    for (i = 0; i < linhas; i++)
        for (j = 0; j < cols; j++)
            scanf("%f", &m[i][j]);
}

void somaMatrizes(float m1[][100], float m2[][100], float resultado[][100], int linhas, int cols) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            resultado[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void subtraiMatrizes(float m1[][100], float m2[][100], float resultado[][100], int linhas, int cols) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            resultado[i][j] = m1[i][j] - m2[i][j];
        }
    }
}

void adicionaConstante(float m[][100], int linhas, int cols, float constante) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++) {
            m[i][j] += constante;
        }
    }
}

int main() {
    int linhas, cols;
    printf("Digite o numero de linhas e colunas das matrizes: ");
    scanf("%d %d", &linhas, &cols);

    float matriz1[100][100], matriz2[100][100], resultado[100][100];
    float constante;

    printf("Preencha a primeira matriz:\n");
    leiaMatriz(matriz1, linhas, cols);

    printf("Preencha a segunda matriz:\n");
    leiaMatriz(matriz2, linhas, cols);

    char opcao;
    printf("Escolha uma opção:\n");
    printf("(a) Somar as duas matrizes\n");
    printf("(b) Subtrair a primeira matriz da segunda\n");
    printf("(c) Adicionar uma constante às duas matrizes\n");
    printf("(d) Imprimir as matrizes\n");
    scanf(" %c", &opcao);
    

    switch (opcao) {
        case 'a':
            somaMatrizes(matriz1, matriz2, resultado, linhas, cols);
            printf("Resultado da soma das matrizes:\n");
            printMatriz(resultado, linhas, cols);
            break;
        case 'b':
            subtraiMatrizes(matriz1, matriz2, resultado, linhas, cols);
            printf("Resultado da subtração da primeira matriz da segunda:\n");
            printMatriz(resultado, linhas, cols);
            break;
        case 'c':
            printf("Digite o valor da constante: ");
            scanf("%f", &constante);
            adicionaConstante(matriz1, linhas, cols, constante);
            adicionaConstante(matriz2, linhas, cols, constante);
            printf("Matriz 1 após adição da constante:\n");
            printMatriz(matriz1, linhas, cols);
            printf("Matriz 2 após adição da constante:\n");
            printMatriz(matriz2, linhas, cols);
            break;
        case 'd':
            printf("Matriz 1:\n");
            printMatriz(matriz1, linhas, cols);
            printf("Matriz 2:\n");
            printMatriz(matriz2, linhas, cols);
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

