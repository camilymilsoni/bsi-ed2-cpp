#include <cstdlib>

#include "cArvore.h"

using namespace std;

int main(int argc, char** argv) {

    cArvore obj;
    obj.raiz = obj.insere(obj.raiz, 10);
    obj.raiz = obj.insere(obj.raiz, 20);
    obj.raiz = obj.insere(obj.raiz, 30);
    obj.emOrdem(obj.raiz);
    
    return 0;
}

