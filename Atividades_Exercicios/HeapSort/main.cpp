#include <cstdlib>
#include <iostream>

#include "cHeapSort.h"

using namespace std;

int main(int argc, char** argv) {

    cHeapSort *obj = new cHeapSort;
    
    cout << "Vetor desordenado: ";
    obj->inicializaVetor();
    obj->imprimirVetor();
    cout << "Vetor ordenado após o Heap Sort: ";
    obj->metodoHeapSort(obj->V, obj->n);
    obj->imprimirVetor();
    
    return 0;
}

