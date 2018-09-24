#ifndef NO_H
#define NO_H

#include "lde.h"
#include <iostream>
template<typename T>
class LDE;

template<typename T>
std::ostream& operator <<  (std::ostream&, const LDE<T>&);

template<typename T>
class No{
private:
    No<T>* proximo;
    T Nome;
    T Idade;
    T CEP;
    T CPF;
    T Telefone;
    T Quarto;
    T ID;
public:
    T getNome() const{
        return Nome;
    }
    T getIdade() const{
        return Idade;
    }
    T getCEP() const{
        return CEP;
    }
    T getCPF() const{
        return CPF;
    }
    T getTelefone() const{
        return Telefone;
    }
    T getQuarto() const{
        return Quarto;
    }
    T getID() const{
        return ID;
    }

    const No<T>* getProx() const{
        return proximo;
    }

    friend class LDE<T>;

    friend std::ostream& operator << <> (std::ostream& out, const LDE<T>& t);
};

#endif // NO_H
