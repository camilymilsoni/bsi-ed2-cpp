#include <cstdlib>
#include <iostream>
//#include <queue>
#include "avl.h"
#include <stddef.h>
#include "no.h"

using namespace std;

int main(int argc, char** argv) {
    
    avl *obj = new avl();
    //int opcao, valor;
    
    obj->raiz = obj->inserir(obj->raiz, 5);
    obj->inserir(obj->raiz, 3);
    obj->inserir(obj->raiz, 2);
    obj->inserir(obj->raiz, 4);
    obj->inserir(obj->raiz, 8);
    cout << "Em ordem: ";
    obj->emOrdem(obj->raiz);
    cout << endl;

/*
    do{
        cout << "1. Imprimir Arvore";
        cout << "\n2. Inserir Elemento";
        cout << "\n0. Sair\n";
        cout << "\nDigite a sua escolha: ";
        cin >> opcao;

        switch(opcao){
            case 1:
                obj->emOrdem(obj->raiz);
            break;     
            case 2:
                cout << "\nDigite o valor: ";
                cin >> valor;
                obj->raiz = obj->inserir(obj->raiz, valor);
            break;          
            case 0:
            break;
        }
    }while(opcao != 0);
*/
    return 0;
}