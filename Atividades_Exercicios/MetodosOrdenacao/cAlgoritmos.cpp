#include "cAlgoritmos.h"
#include <iostream>

using namespace std;

cAlgoritmos::cAlgoritmos() {
}

cAlgoritmos::cAlgoritmos(const cAlgoritmos& orig) {
}

cAlgoritmos::~cAlgoritmos() {
}

void cAlgoritmos::inicializa(){
    this->N = 10;
    this->V[0] = 7;
    this->V[1] = 3;
    this->V[2] = 8;
    this->V[3] = 4;
    this->V[4] = 9;
    this->V[5] = 10;
    this->V[6] = 1;
    this->V[7] = 6;
    this->V[8] = 2;
    this->V[9] = 5;
}

void cAlgoritmos::listar(){
    for(int i = 0; i <= 9; i++){
        cout << V[i] << " ";
    }
    
}

void cAlgoritmos::bubbleSort(int *V, int N){
    int i, continua, aux;
    
    do{
        continua = 0;
        for(i = 0; i < N-1; i++){
            if(V[i] > V[i+1]){
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                continua = 1;
            }
        }
    }while(continua);
}

void cAlgoritmos::bubbleSort2(int *V, int N){ //otimizado
    int i, continua, aux, fim = N;
    
    do{
        continua = 0;
        for(i = 0; i < fim-1; i++){
            if(V[i] > V[i+1]){
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                continua = i;
                //this->listar();
            }
        }
        fim--;
    }while(continua != 0);
}

void cAlgoritmos::insertionSort(int *V, int N){
    int i, j, aux;
    
    for(i = 1; i < N; i++){
        aux = V[i];
        for(j = i; (j > 0) && (aux < V[j-1]); j--)
            V[j] = V[j-1];
        //this->listar();
        V[j] = aux;
    }
}

void cAlgoritmos::insertionSort2(int *V, int N){
    int i, j, aux;
    
    for(i = 1; i < N; i++){
        aux = V[i];
        for(j = i-1; (j >= 0) && (aux < V[j]); j--)
            V[j+1] = V[j];
        //this->listar();
        V[j+1] = aux;
    }
}

void cAlgoritmos::selectionSort(int *V, int N){
    int i, j, menor, troca;
    
    for(i = 0; i < N-1; i++){
        menor = i;
        for(j = i+1; j < N; j++){
            if(V[j] < V[menor])
                menor = j;
        }
        if(i != menor){
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;
            //this->listar();
        }
    }
}