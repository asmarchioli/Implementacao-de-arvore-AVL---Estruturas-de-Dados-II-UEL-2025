#include "fila.h"

// Função para criar a fila
Fila* criaFila() {
    Fila *f = (Fila*)malloc(sizeof(Fila));
    f->inicio = f->fim = NULL;
    return f;
}

// Verifica se a fila está vazia
int filaVazia(Fila *f) {
    return (f->inicio == NULL);
}

// Enfileira um item
void inserirFila(Fila *f, PONT no, int nivel) {
    FilaNo *novo = (FilaNo*)malloc(sizeof(FilaNo));
    novo->item.no = no;
    novo->item.nivel = nivel;
    novo->prox = NULL;

    if (f->fim) f->fim->prox = novo;
    else f->inicio = novo;

    f->fim = novo;
}

// Desenfileira um item
ItemFila retirarFila(Fila *f) {
    if (filaVazia(f)) {
        ItemFila vazio = {NULL, -1};
        return vazio;
    }

    FilaNo *temp = f->inicio;
    ItemFila item = temp->item;
    f->inicio = temp->prox;

    if (!f->inicio) f->fim = NULL;
    
    free(temp);
    return item;
}

// Função para liberar a fila
void liberaFila(Fila *f) {
    while (!filaVazia(f)) {
        retirarFila(f);
    }
    free(f);
}