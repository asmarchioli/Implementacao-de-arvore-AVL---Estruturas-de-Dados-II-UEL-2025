#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>

// Apenas declare externamente que PONT existe em outro arquivo
typedef struct aux *PONT;

typedef struct {
    PONT no;
    int nivel;
} ItemFila;

typedef struct FilaNo {
    ItemFila item;
    struct FilaNo *prox;
} FilaNo;

typedef struct {
    FilaNo *inicio, *fim;
} Fila;

Fila* criaFila();
int filaVazia(Fila *f);
void inserirFila(Fila *f, PONT no, int nivel);
ItemFila retirarFila(Fila *f);
void liberaFila(Fila *f);

#endif