#ifndef CARVORE_H
#define CARVORE_H

#include "cNoArvore.h"
#include <stddef.h>


class cArvore {
public:
    cArvore();
    cArvore(const cArvore& orig);
    virtual ~cArvore();
    
    cNoArvore *raiz = NULL;
    void insere(int valor);
    cNoArvore* insereRecursiv(cNoArvore *raiz, int valor);
    void emOrdem(cNoArvore *raiz);
    void preOrdem(cNoArvore *raiz);
    void posOrdem(cNoArvore *raiz);
    int calcAltura(cNoArvore *raiz);
    void maiorElemento(cNoArvore *raiz);
    void menorElemento(cNoArvore *raiz);
    void imprimirFolha(cNoArvore *raiz);
    int somarElementos1(cNoArvore *raiz);
    int somarElementos2(cNoArvore *raiz);
    int qtdeNos(cNoArvore *raiz);
    int buscarElementoRecursiv1(cNoArvore *raiz, int valor);
    cNoArvore* buscarElementoRecursiv2(cNoArvore *raiz, int valor);
    int nivelElemento(cNoArvore *raiz, int valor, int nivel);
    cNoArvore* removerElemento(cNoArvore *raiz, int valorRem);
    void valorMeio(cNoArvore *raiz);

    
private:

};

#endif /* CARVORE_H */

