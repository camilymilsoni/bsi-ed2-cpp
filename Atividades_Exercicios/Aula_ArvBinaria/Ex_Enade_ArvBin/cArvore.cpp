#include "cArvore.h"
#include <iostream>

using namespace std;

cArvore::cArvore() {
}

cArvore::cArvore(const cArvore& orig) {
}

cArvore::~cArvore() {
}

noArvore* cArvore::insere(noArvore *arvore, int valor){
    
    if(arvore == NULL){
        arvore = new noArvore;
        arvore->esquerda = NULL;
        arvore->direita = NULL;
        arvore->dado = valor;
    }
    else if(valor < arvore->dado){
        arvore->esquerda = insere(arvore->esquerda, valor);
    }
    else{
        arvore->direita = insere(arvore->direita, valor);
    }
    
    return arvore;
    
}

void cArvore::emOrdem(noArvore *raiz){
    
    if(raiz != NULL){
        emOrdem(raiz->esquerda);
        cout << raiz->dado << " ";
        emOrdem(raiz->direita);
    }
    
}