#ifndef CARVORE_H
#define CARVORE_H

#include <stddef.h>


struct noArvore {
    int dado;
    noArvore *esquerda;
    noArvore *direita;
};

class cArvore {
public:
    cArvore();
    cArvore(const cArvore& orig);
    virtual ~cArvore();
    
    noArvore *raiz = NULL;
    noArvore* insere(noArvore *arvore, int valor);
    void emOrdem(noArvore *raiz);
    
private:

};

#endif /* CARVORE_H */

