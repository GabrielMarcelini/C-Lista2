#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, M;

	//Solicite ao usuário o número de linhas e colunas da matriz
    printf("Digite o numero de linhas da matriz (ate 100): ");
    scanf("%d", &N);
    printf("Digite o numero de colunas da matriz (ate 100): ");
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
    
    //apresente a matriz
    printf("Matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    // apresente a diagonal pricipal da matriz
    printf("\n\n");
    printf("Digonal principal:\n");
	for (int i = 0; i < N && i < M; i++) {
    	printf("%d\t", matriz[i][i]);
    }
	printf("\n");
	return 0;
}
