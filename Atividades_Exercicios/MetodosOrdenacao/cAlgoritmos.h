#ifndef CALGORITMOS_H
#define CALGORITMOS_H

class cAlgoritmos {
public:
    cAlgoritmos();
    cAlgoritmos(const cAlgoritmos& orig);
    virtual ~cAlgoritmos();
    
    int N, V[10];
    
    void inicializa();
    void listar();
    void bubbleSort(int *V, int N);
    void bubbleSort2(int *V, int N);
    void insertionSort(int *V, int N);
    void insertionSort2(int *V, int N);
    void selectionSort(int *V, int N);
    
    
private:

};

#endif /* CALGORITMOS_H */

