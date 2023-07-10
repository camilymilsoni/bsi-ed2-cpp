#include "no.h"
#include <cstdlib>

no::no() {  
    this->direito = this->esquerdo = NULL;  
}  

no::no(int valor) {  
    this->valor = valor;  
    this->direito = this->esquerdo = NULL;  
} 

no::~no() {
}