#ifndef NO_H
#define NO_H

class no {
public:
    no();
    no(int valor);
    virtual ~no();
    
    int altura;
    int valor;  
    no *direito, *esquerdo;  
    
private:

};

#endif /* NO_H */