#include <cstdlib>
#include <iostream>

#include "cAlgoritmos.h"

using namespace std;

int main(int argc, char** argv) {

    cAlgoritmos *obj = new cAlgoritmos;
    
    cout << "Vetor: ";
    obj->inicializa();
    obj->listar();
    cout << endl;
    cout << "Bubble Sort 1: ";
    obj->bubbleSort(obj->V, obj->N);
    obj->listar();
    cout << endl;
    cout << "Bubble Sort 2: ";
    obj->bubbleSort2(obj->V, obj->N);
    obj->listar();
    cout << endl;
    cout << "Insertion Sort 1: ";
    obj->insertionSort(obj->V, obj->N);
    obj->listar();
    cout << endl;
    cout << "Insertion Sort 2: ";
    obj->insertionSort2(obj->V, obj->N);
    obj->listar();
    cout << endl;
    cout << "Selection Sort: ";
    obj->selectionSort(obj->V, obj->N);
    obj->listar();
    cout << endl;
    
    
    return 0;
}

