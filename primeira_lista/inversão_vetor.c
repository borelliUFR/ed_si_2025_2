// 3. Inversão de Vetor
// Objetivo: Manipular dois vetores simultaneamente para copiar e inverter
// dados.
// 1. Declare e preencha um vetor de 7 posições.
// 2. Declare um segundo vetor para armazenar a versão invertida do primeiro.
// 3. Implemente a lógica para inverter os elementos.
// 4. Imprima ambos os vetores para comparar os resultados.

#include <stdio.h>

#define MAX 7

int main() 
{
    int v1[MAX] = {1, 2, 3, 4, 5, 6, 7};
    int v2[MAX];

    // Invertendo os elementos do vetor v1 para v2
    for(int i = 0; i < MAX; i++) 
    {
        v2[i] = v1[MAX - 1 - i];
    }

    // Imprimindo o vetor original
    printf("Vetor original (v1): ");
    for(int i = 0; i < MAX; i++) 
    {
        printf("%d ", v1[i]);
    }
    printf("\n");

    // Imprimindo o vetor invertido
    printf("Vetor invertido (v2): ");
    for(int i = 0; i < MAX; i++) 
    {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}