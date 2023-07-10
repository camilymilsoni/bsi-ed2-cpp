#include "cArvore.h"
#include "cNoArvore.h"
#include <iostream>

using namespace std;

cArvore::cArvore() {
    this->raiz = NULL;
}

cArvore::cArvore(const cArvore& orig) {
}

cArvore::~cArvore() {
}

cNoArvore* cArvore::insereRecursiv(cNoArvore* raiz, int valor){
    
    if(raiz == NULL){
        raiz = new cNoArvore(valor);
    }
    else{
        if(valor < raiz->dado){
            raiz->esquerda = insereRecursiv(raiz->esquerda, valor);
        }
        else{
            raiz->direita = insereRecursiv(raiz->direita, valor);
        }
    }
    return raiz;
}

void cArvore::emOrdem(cNoArvore *raiz){
    
    if(raiz != NULL){
        this->emOrdem(raiz->esquerda);
        cout << raiz->dado << " ";
        this->emOrdem(raiz->direita);
    }
    
}

void cArvore::preOrdem(cNoArvore *raiz){
    
    if(raiz != NULL){
        cout << raiz->dado << " ";
        this->preOrdem(raiz->esquerda);
        this->preOrdem(raiz->direita);
    }
    
}

void cArvore::posOrdem(cNoArvore *raiz){
    
    if(raiz != NULL){
        this->posOrdem(raiz->esquerda);
        this->posOrdem(raiz->direita);
        cout << raiz->dado << " ";
    }
    
}

int cArvore::calcAltura(cNoArvore *raiz) { 
    
    if (raiz == NULL){
        return -1;
    }
    else{ 
        int alturaEsq, alturaDir; 
        alturaEsq = calcAltura(raiz->esquerda); 
        alturaDir = calcAltura(raiz->direita); 
 
        if (alturaEsq < alturaDir){
            return alturaDir + 1;
        }
        else{ 
            return alturaEsq + 1;
        }
    } 
}

void cArvore::maiorElemento(cNoArvore *raiz){
    
    if(raiz->direita == NULL){
        cout << raiz->dado;
    }
    else{
        this->maiorElemento(raiz->direita);
    }
    
}

void cArvore::menorElemento(cNoArvore *raiz){
    
    if(raiz->esquerda == NULL){
        cout << raiz->dado;
    }
    else{
        this->menorElemento(raiz->esquerda);
    }
    
}

void cArvore::imprimirFolha(cNoArvore *raiz){

    if(raiz != NULL){
        if(raiz->esquerda == NULL && raiz->direita == NULL){
            cout << raiz->dado << " ";
        }
        this->imprimirFolha(raiz->esquerda);
        this->imprimirFolha(raiz->direita);
    }
    
}

int cArvore::somarElementos1(cNoArvore *raiz){
    
    static int soma = 0;
    
    if(raiz != NULL){
        soma += raiz->dado;
        this->somarElementos1(raiz->esquerda);
        this->somarElementos1(raiz->direita);
    }
    return soma;
}

int cArvore::qtdeNos(cNoArvore *raiz){
    
    int x = 0;
    
    if(raiz != NULL){
        x = 1 + this->qtdeNos(raiz->esquerda) + this->qtdeNos(raiz->direita);
    }
    return x;
}

int cArvore::somarElementos2(cNoArvore *raiz){
    
    int x = 0;
    
    if(raiz != NULL){
        x = raiz->dado + this->somarElementos2(raiz->esquerda) + this->somarElementos2(raiz->direita);
    }
    
    return x;
    
}

int cArvore::buscarElementoRecursiv1(cNoArvore *raiz, int valor){
    
    if(raiz != NULL) {
        if(valor == raiz->dado){
            return raiz->dado;
        }
        else{    
            if(valor < raiz->dado){
                valor = this->buscarElementoRecursiv1(raiz->esquerda, valor);
            }
            else{
                valor = this->buscarElementoRecursiv1(raiz->direita, valor);
            }
        }
    }
    else{
        return 0;
    }
}

cNoArvore* cArvore::buscarElementoRecursiv2(cNoArvore *raiz, int valor){
    
    if(raiz != NULL){
        if(valor == raiz->dado){
            return raiz;
        }
        else{
            if(valor < raiz->dado){
                raiz = this->buscarElementoRecursiv2(raiz->esquerda, valor);
            }
            else{
                raiz = this->buscarElementoRecursiv2(raiz->direita, valor);
            }
        }
    }
    else{
        return NULL;
    }
    
}

int cArvore::nivelElemento(cNoArvore *raiz, int valor, int nivel){
    
    if(raiz == NULL){
        return -1;
    }
    else{
        if(valor == raiz->dado){
            return nivel;
        }
        else{
            nivel++;
        }
    }
            
    if(valor < raiz->dado){
        nivel = this->nivelElemento(raiz->esquerda, valor, nivel);
    }
    else{
        if (valor > raiz->dado){
            nivel = this->nivelElemento(raiz->direita, valor, nivel);
        }
    }
    
    return nivel;
    
}

cNoArvore* cArvore::removerElemento(cNoArvore *raiz, int valorRem){
    
    if(raiz == NULL){
        return NULL;  
    }
    else{    
        if(raiz->dado > valorRem){
            raiz->esquerda = removerElemento(raiz->esquerda, valorRem);
        }
        else if(raiz->dado < valorRem){
           raiz->direita = removerElemento(raiz->direita, valorRem);
        }
        else { 
        /* Situação 1: O nó não possui filhos = FOLHA */
            if((raiz->esquerda == NULL) && (raiz->direita == NULL)){
                free(raiz);
                raiz = NULL;
            }
           /* Situação 2: O nó possui somente um filho à direita */
            else if(raiz->esquerda == NULL){
                cNoArvore *temp = raiz;
                raiz = raiz->direita;
                free(temp);
            }
           /* Situação 3: O nó possui somente um filho à esquerda */
            else if(raiz->direita == NULL){
                cNoArvore *temp = raiz;
                raiz = raiz->esquerda;
                free(temp);
            }
           /* Situação 4: O nó possui dois filhos */
            else{
                cNoArvore *aux = raiz->esquerda;
                while (aux->direita != NULL) {
                    aux = aux->direita;
                }
                raiz->dado = aux->dado; /* troca os valores */
                aux->dado = valorRem;
                raiz->esquerda = removerElemento(raiz->esquerda, valorRem);
            }
        }
    }
    return raiz;
}

void cArvore::valorMeio(cNoArvore *raiz){
    
    static int meio = 0, cont = -1;
    
    if(raiz != NULL){
        this->valorMeio(raiz->esquerda);
        cont++;
        meio = this->qtdeNos(this->raiz)/2;
        if(cont == meio)
            cout << raiz->dado << endl;
        this->valorMeio(raiz->direita);
    }
    
}