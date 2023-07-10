#include <cstdlib>

#include "cArvore.h"

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    cArvore *obj = new cArvore();
    obj->raiz = obj->insereRecursiv(obj->raiz, 5);
    obj->insereRecursiv(obj->raiz, 1);
    obj->insereRecursiv(obj->raiz, 3);
    obj->insereRecursiv(obj->raiz, 6);
    obj->insereRecursiv(obj->raiz, 4);
    obj->insereRecursiv(obj->raiz, 2);
    obj->insereRecursiv(obj->raiz, 7);
    obj->insereRecursiv(obj->raiz, 8);
    cout << "Em ordem: ";
    obj->emOrdem(obj->raiz);
    cout << endl;
    cout << "Pre ordem: ";
    obj->preOrdem(obj->raiz);
    cout << endl;
    cout << "Pos ordem: ";
    obj->posOrdem(obj->raiz);
    cout << endl;
    cout << "Altura da arvore: ";
    cout << obj->calcAltura(obj->raiz);
    cout << endl;
    cout << "Maior elemento: ";
    obj->maiorElemento(obj->raiz);
    cout << endl;
    cout << "Menor elemento: ";
    obj->menorElemento(obj->raiz);
    cout << endl;
    cout << "Elementos folha: ";
    obj->imprimirFolha(obj->raiz);
    cout << endl;
    cout << "Quantidade de nós: ";
    cout << obj->qtdeNos(obj->raiz);
    cout << endl;
    cout << "Valor do meio: ";
    obj->valorMeio(obj->raiz);
    cout << endl;
    cout << "Somatoria de todos os elementos (Metodo 1): ";
    cout << obj->somarElementos1(obj->raiz);
    cout << endl;
    cout << "Somatoria de todos os elementos (Metodo 2): ";
    cout << obj->somarElementos2(obj->raiz);
    cout << endl;
    cout << endl;
    cout << "*Elemento encontrado: ";
    cout << obj->buscarElementoRecursiv1(obj->raiz, 5);
    cout << endl;
    cout << "*Endereco do elemento encontrado: ";
    cout << obj->buscarElementoRecursiv2(obj->raiz, 5);
    cout << endl;
    
    if(obj->buscarElementoRecursiv2(obj->raiz, 5) != NULL){
        
        if(obj->buscarElementoRecursiv2(obj->raiz, 5)->direita != NULL){
            cout << "*Filho a direita do endereco encontrado: ";
            cout << obj->buscarElementoRecursiv2(obj->raiz, 5)->direita->dado;
            cout << endl;
        }
        if(obj->buscarElementoRecursiv2(obj->raiz, 5)->esquerda != NULL){
            cout << "*Filho a esquerda do endereco encontrado: ";
            cout << obj->buscarElementoRecursiv2(obj->raiz, 5)->esquerda->dado;
            cout << endl;
        }
    }
    
    cout << "*Nivel do elemento encontrado: ";
    cout << obj->nivelElemento(obj->raiz, 5, 0);
    cout << endl;
    cout << endl;
    cout << "Elemento a ser removido: 5";
    obj->removerElemento(obj->raiz, 5);
    cout << endl;
    cout << "Em ordem: ";
    obj->emOrdem(obj->raiz);
    cout << endl;
    cout << "Pre ordem: ";
    obj->preOrdem(obj->raiz);
    cout << endl;
    cout << "Pos ordem: ";
    obj->posOrdem(obj->raiz);
    cout << endl;
 
    return 0;
}

