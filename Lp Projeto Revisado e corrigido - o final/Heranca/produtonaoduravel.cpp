#include <iostream>
#include "produtonaoduravel.hpp"

using namespace std;

ProdutonaoDuravel::ProdutonaoDuravel(){
    this->genero = " ";
    this->validade = 0;
}

void ProdutonaoDuravel::setGenero(string genero){
    this->genero = genero;
}

string ProdutonaoDuravel::getGenero(){
    return this->genero;
}

void ProdutonaoDuravel::setValidade(int validade){
    this->validade = validade;
}

int ProdutonaoDuravel::getValidade(){
    return this->validade;
}
