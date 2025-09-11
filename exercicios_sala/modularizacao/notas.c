// Pessoal, segue a resolução do exercício de notas com funções e arrays.
// Trata-se de uma versão simplificada, mas que já utiliza funções para modularizar o código.
// Vocês podem expandir isso conforme necessário.
// Lembrem-se de que esta é uma solução básica e pode ser aprimorada com mais validações e funcionalidades.

// importando a biblioteca padrão de entrada e saída
#include <stdio.h>

// Definindo o número máximo de notas
#define MAX 3

// Função para ler uma nota do usuário
float lerNota() {
    float nota;

    printf("Digite a nota:");
    scanf("%f", &nota);

    return nota;
}

// Função para calcular a média das duas maiores notas
float mediaMelhores2(float n[MAX]) {
    float n1, n2;

    // Aqui utilizei um loop para encontrar as duas maiores notas
    // Isso torna o código mais flexível caso o número de notas mude
    for (int i=0; i<MAX; i++) {
        if (i == 0) {
            n1 = n[i];
        } else if (i == 1) {
            n2 = n[i];
        } else {
            if (n[i] > n1) {
                n2 = n1;
                n1 = n[i];
            } else if (n[i] > n2) {
                n2 = n[i];
            }
        }
    }
    // Calculando a média das duas maiores notas
    float media = (n1 + n2) / 2;

    printf("As duas maiores notas sao: %.1f e %.1f\n", n1, n2);
    printf("A media das duas maiores notas eh: %.1f\n", media);

    return media;
}

// Função para comparar duas médias e informar qual é maior
void compararMedias(float m1, float m2) {
    if (m1 > m2) {
        printf("\nA primeira media eh maior que a segunda.\n");
    } else if (m1 < m2) {
        printf("\nA segunda media eh maior que a primeira.\n");
    } else {
        printf("\nAs medias sao iguais.\n");
    }
}

// Função principal
int main() {

    // Declarando os arrays para armazenar as notas dos dois alunos
    float A[MAX], B[MAX];

    // Lendo as notas do aluno A
    printf("Digite as notas do aluno A:\n");
    for (int i = 0; i < MAX; i++) {
        A[i] = lerNota();
    }

    // Lendo as notas do aluno B
    printf("Digite as notas do aluno B:\n");
    for (int i = 0; i < MAX; i++) {
        B[i] = lerNota();
    }

    // Calculando as médias das duas maiores notas para ambos os alunos
    float mediaA = mediaMelhores2(A);
    float mediaB = mediaMelhores2(B);

    // Comparando as médias e informando qual é maior
    compararMedias(mediaA, mediaB);

    return 0;
}