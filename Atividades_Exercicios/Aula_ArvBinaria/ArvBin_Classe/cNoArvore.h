#ifndef CNOARVORE_H
#define CNOARVORE_H

class cNoArvore {
public:
    cNoArvore();
    cNoArvore(int valor);
    virtual ~cNoArvore();
    
    int dado;
    cNoArvore *esquerda;
    cNoArvore *direita;
    
private:

};

#endif /* CNOARVORE_H */

