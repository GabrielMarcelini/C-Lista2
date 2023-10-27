#include <stdio.h>
#include <stdlib.h>

void marcaRede(int mar[][100], int xi, int xf, int yi, int yf) {
    for (int i = xi; i <= xf; i++) {
        for (int j = yi; j <= yf; j++) {
            mar[i][j] = 1;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int mar[100][100] = {0}; // Inicializa a matriz do mar com zeros

    for (int i = 0; i < N; i++) {
        int xi, xf, yi, yf;
        scanf("%d %d %d %d", &xi, &xf, &yi, &yf);
        marcaRede(mar, xi, xf, yi, yf);
    }

    int areaTotal = 0;

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            areaTotal += mar[i][j];
        }
    }

    printf("%d\n", areaTotal);

    return 0;
}

