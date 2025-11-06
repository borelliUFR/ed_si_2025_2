#include <stdio.h>

#define MAX 10

int fila[MAX];
int p, u;

// verifica se a fila está vazia
int fila_vazia() {
    return p == u;
}

// verifica se a fila está cheia
int fila_cheia() {
    return ((u + 1) % MAX) == p;
}

// imprime os elementos da fila
void imprimir_fila() {
    int i = p;
    while (i != u) {
        printf("%d ", fila[i]);
        i = (i + 1) % MAX;
    }
    printf("\n");
}

void inserir(int y) {
 fila[u++] = y;
 if (u == MAX) u = 0;
}

int remover() {
 int x = fila[p];
 p++;
 if (p == MAX) p = 0;

 return x;
}


int main() {
    
    p = u = 0; // Inicializa ponteiros de início e fim da fila

    printf("A fila está vazia? %s\n", fila_vazia() ? "Sim" : "Não");
    printf("A fila está cheia? %s\n", fila_cheia() ? "Sim" : "Não");

    imprimir_fila();

    inserir(10);
    inserir(20);
    inserir(30);

    imprimir_fila();

    printf("O valor %d foi removido!\n", remover());

    imprimir_fila();


    return 0;
}