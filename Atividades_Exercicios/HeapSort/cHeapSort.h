#ifndef CHEAPSORT_H
#define CHEAPSORT_H

class cHeapSort {
public:
    cHeapSort();
    cHeapSort(const cHeapSort& orig);
    virtual ~cHeapSort();
    
    int n, V[9];
    
    void inicializaVetor();
    void imprimirVetor();
    void constroiHeapMax(int V[], int n);
    void refazHeapMax(int V[], int i, int compHeap);
    void metodoHeapSort(int V[], int n);
    
private:

};

#endif /* CHEAPSORT_H */

