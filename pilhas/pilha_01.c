#include <stdio.h>

#define MAX 5

int pilha[MAX];
int topo = 0;

// isFull verifica se a pilha está cheia
int isFull() {
    return topo == MAX;
}

int isEmpty() {
    return topo == 0;
}   

void push(int valor) {
    if (isFull()) {
        printf("Pilha cheia!\n");
        return;
    }
    pilha[topo] = valor;
    topo++;

    printf("Elemento %d inserido na pilha.\n", valor);
}

int pop() {
    if (isEmpty()) {
        printf("Pilha vazia!\n");
        return -1; // Indicador de pilha vazia
    }
    topo--;
    return pilha[topo];
}

int main() {
    
    printf("Pliha esta vazia? %s\n", isEmpty() ? "Sim" : "Nao");
    
    push(10);
    push(20);
    push(30);
    
    printf("Elemento removido: %d\n", pop());
    printf("Elemento removido: %d\n", pop());
    
    push(40);
    
    
    return 0;
}   