#include <cstdlib>
#include <iostream>
#include <queue>
#include <stddef.h>
#include "no.h"

#ifndef AVL_H
#define AVL_H

class avl {
public:
    avl();
    avl(const avl& orig);
    virtual ~avl();
    
    no *raiz;
       
    int calcAltura(no *p);
    int bf(struct no *no);
    no* rotacaoLL(no *no);
    no* rotacaoRR(no *no);
    no* rotacaoRL(no *no);
    no* rotacaoLR(no *no);
    no* inserir(no *r, int valor);
    void emOrdem(no *no);
    no* apontaESQ(no* p);
    no* apontaDIR(no* p);
    
private:

};

#endif /* AVL_H */