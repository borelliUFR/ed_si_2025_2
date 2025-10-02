#include <stdio.h>
#include <stdlib.h> // Necessário para usar malloc e free

// Definição da estrutura da célula (nó)
typedef struct reg {
    int conteudo;        // O dado armazenado
    struct reg *prox;    // Ponteiro para a próxima célula
} celula;

void imprime(celula *le) {
    if (le != NULL) {
        printf("%d -> ", le->conteudo);
        imprime(le->prox); // Chamada recursiva para o próximo nó
    } else {
        printf("NULL\n"); // Indica o fim da lista
    }
}

int main() {
    // 1. Inicialização dos ponteiros
    celula *lista = NULL;  // Ponteiro de cabeça (início da lista)
    celula *ultimo = NULL; // Ponteiro auxiliar para o último nó inserido

    int num_elementos = 10;
    
    printf("Criando lista encadeada com %d elementos:\n", num_elementos);

    // 2. Criação e inserção dos 10 elementos
    for (int i = 1; i <= num_elementos; i++) {
        // Aloca memória para uma nova célula
        celula *nova_celula = (celula *)malloc(sizeof(celula));

        // Verificação de erro de alocação
        if (nova_celula == NULL) {
            printf("Erro de alocação de memória.\n");
            break; // Sai do loop
        }

        // Preenche o conteúdo e garante que o novo nó aponta para NULL
        nova_celula->conteudo = i * 10;
        nova_celula->prox = NULL;

        // Conecta a nova célula à lista
        if (lista == NULL) {
            // Se a lista estiver vazia, a nova célula é a cabeça
            lista = nova_celula;
        } else {
            // Se não estiver vazia, o 'prox' do último nó aponta para o novo
            ultimo->prox = nova_celula;
        }

        // Atualiza o ponteiro 'ultimo' para o nó recém-adicionado
        ultimo = nova_celula;
    }

    // --- Exibição da Lista ---
    printf("Elementos: \n");
    celula *atual = lista; // Ponteiro auxiliar para percorrer
    while (atual != NULL) {
        printf("%d -> ", atual->conteudo);
        atual = atual->prox;
    }
    printf("NULL\n");

    // Ou usando a função recursiva
    printf("Elementos (usando função recursiva): \n");
    imprime(lista);

    // --- Liberação da Memória ---
    celula *proximo;
    atual = lista; // Reinicia o ponteiro para o início
    while (atual != NULL) {
        proximo = atual->prox; // Guarda o endereço do próximo antes de liberar o atual
        free(atual);           // Libera o nó atual
        atual = proximo;       // Move para o próximo nó
    }
    printf("Memória da lista liberada.\n");

    return 0;
}