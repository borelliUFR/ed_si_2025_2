// 4. Manipulação Básica de Matriz
    // Objetivo: Praticar a declaração e o acesso a elementos em uma matriz.
    // 1. Declare uma matriz 3 × 3 do tipo int.
    // 2. Preencha a matriz com valores digitados pelo usuário.
    // 3. Exiba a matriz de forma organizada (linhas e colunas).
    // 4. Calcule e exiba a soma dos elementos da diagonal principal.

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() 
{
    int matriz[LINHAS][COLUNAS];
    int somaDiagonal = 0;

    // Preenchendo a matriz com valores do usuário
    printf("Preencha a matriz %dx%d:\n", LINHAS, COLUNAS);
    for(int i = 0; i < LINHAS; i++) 
    {
        for(int j = 0; j < COLUNAS; j++) 
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibindo a matriz de forma organizada
    printf("Matriz preenchida:\n");
    for(int i = 0; i < LINHAS; i++) 
    {
        for(int j = 0; j < COLUNAS; j++) 
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Calculando a soma dos elementos da diagonal principal
    for(int i = 0; i < LINHAS; i++) 
    {
        somaDiagonal += matriz[i][i];
    }

    printf("Soma dos elementos da diagonal principal: %d\n", somaDiagonal);

    return 0;
}
