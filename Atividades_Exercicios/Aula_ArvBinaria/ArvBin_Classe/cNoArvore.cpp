#include <stddef.h>

#include "cNoArvore.h"

cNoArvore::cNoArvore() {
    this->direita = this->esquerda = NULL;
}

cNoArvore::cNoArvore(int valor) {
    this->dado = valor;
    this->direita = this->esquerda = NULL;
}

cNoArvore::~cNoArvore() {
}

