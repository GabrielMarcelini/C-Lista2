#include <stdio.h>
#include <stdlib.h>

#define MAX_COORDINATES 500

// Função para verificar se pelo menos um raio caiu no mesmo lugar
int verificaRaiosIguais(int coordenadas[][2], int n) {
    int i, j;
    int *conjunto[MAX_COORDINATES];

    for (i = 0; i < MAX_COORDINATES; i++) {
        conjunto[i] = (int *)malloc(MAX_COORDINATES * sizeof(int));
        for (j = 0; j < MAX_COORDINATES; j++) {
            conjunto[i][j] = 0; // Inicializa o conjunto com zeros
        }
    }

    for (i = 0; i < n; i++) {
        int x = coordenadas[i][0];
        int y = coordenadas[i][1];

        if (conjunto[x][y] == 1) {
            return 1; // Pelo menos um raio caiu no mesmo lugar
        }

        conjunto[x][y] = 1; // Marca a coordenada como visitada
    }

    for (i = 0; i < MAX_COORDINATES; i++) {
        free(conjunto[i]);
    }

    return 0; // Nenhum raio caiu no mesmo lugar
}

int main() {
    int n;
    scanf("%d", &n);

    int coordenadas[MAX_COORDINATES][2];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coordenadas[i][0], &coordenadas[i][1]);
    }

    int resultado = verificaRaiosIguais(coordenadas, n);

    printf("%d\n", resultado);

    return 0;
}

