// 2. Busca e Contagem em Vetor
// Objetivo: Implementar algoritmos de busca linear e contagem.
// 1. Crie um vetor de 10 posições com valores predefinidos.
// 2. Peça ao usuário para digitar um número a ser buscado.
// 3. Verifique se o número existe no vetor e imprima o resultado.
// 4. Conte quantas vezes o número aparece e imprima a frequência.

#include <stdio.h>
#define MAX 10

int main() 
{
    int v[MAX] = {5, 2, 3, 1, 9, 2, 4, 2, 6, 7};
    int num, encontrado = 0, contagem = 0;

    printf("Vetor predefinido: ");
    for(int i = 0; i < MAX; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("Digite um numero para buscar no vetor: ");
    scanf("%d", &num);

    for(int i = 0; i < MAX; i++) 
    {
        if(v[i] == num) 
        {
            encontrado = 1;
            contagem++;
        }
    }

    if(encontrado) 
    {
        printf("Numero %d encontrado no vetor.\n", num);
        printf("Frequencia do numero %d: %d vezes.\n", num, contagem);
    } 
    else 
    {
        printf("Numero %d nao encontrado no vetor.\n", num);
    }

    return 0;
}