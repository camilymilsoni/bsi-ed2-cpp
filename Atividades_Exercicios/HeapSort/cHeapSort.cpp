#include "cHeapSort.h"
#include <iostream>

using namespace std;

cHeapSort::cHeapSort() {
}

cHeapSort::cHeapSort(const cHeapSort& orig) {
}

cHeapSort::~cHeapSort() {
}

void cHeapSort::inicializaVetor(){
    
    this->n = 9;
    this->V[0] = 3;
    this->V[1] = 7;
    this->V[2] = 1;
    this->V[3] = 8;
    this->V[4] = 2;
    this->V[5] = 5;
    this->V[6] = 9;
    this->V[7] = 4;
    this->V[8] = 6;
    
}

void cHeapSort::imprimirVetor(){
    
    for (int i = 0; i <= 8; i++)
        cout << V[i] << " ";
    cout << endl;
}

void cHeapSort::constroiHeapMax(int V[], int n){
    int compHeap = n;
    
    for(int i = (n)/2 - 1; i >= 0 ; i--)
        this->refazHeapMax(V, i, compHeap);
}

void cHeapSort::refazHeapMax(int V[], int i, int compHeap){
    int esq, dir, maior, temp;
    
    esq = 2 * i + 1; 
    dir = 2 * i + 2;
    
    if(esq < compHeap && V[esq] > V[i]) 
        maior = esq;
    else 
        maior = i;
    
    if(dir < compHeap && V[dir] > V[maior])
        maior = dir;
    
    if(maior != i){
        temp = V[i];
        V[i] = V[maior];
        V[maior] = temp;

        this->refazHeapMax(V, maior, compHeap);
    }
}

void cHeapSort::metodoHeapSort(int V[], int n){
    int i, compHeap, temp;
    
    compHeap = n;
    this->constroiHeapMax(V, n);
    
    for(i = n - 1; i > 0; i--){
        temp = V[0];
        V[0] = V[i];
        V[i] = temp;
        
        compHeap--;
        this->refazHeapMax(V, 0, compHeap);
    }
}