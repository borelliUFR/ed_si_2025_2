// 1. Operações Básicas com Vetor
    // Objetivo: Praticar a criação, o preenchimento e o cálculo em um vetor.
    // 1. Declare um vetor de 5 posições do tipo int.
    // 2. Preencha o vetor com valores fornecidos pelo usuário.
    // 3. Calcule e exiba a soma de todos os elementos.
    // 4. Encontre e exiba o maior e o menor valor do vetor

#include <stdio.h>

#define MAX 5

int main() 
{
	int v[MAX] = {5, 2, 3, 1, 9};

    printf("Preencha o vetor com %d valores inteiros:\n", MAX);
    for(int i = 0; i < MAX; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    int soma = 0;
    int maior = v[0];
    int menor = v[0];

    for(int i = 0; i < MAX; i++)
    {
        soma += v[i];
        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
    }

    printf("Soma dos elementos: %d\n", soma);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

	return 0;
}
