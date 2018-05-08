#include <iostream>
#include "produtoduravel.hpp"

using namespace std;

ProdutoDuravel::ProdutoDuravel(){
    this->predominante = " ";
    this->durabilidade = " ";
}

void ProdutoDuravel::setPredominante(string predominante){
    this->predominante = predominante;
}

string ProdutoDuravel::getPredominante(){
    return this->predominante;
}

void ProdutoDuravel::setDurabilidade(string durabilidade){
    this->durabilidade = durabilidade;
}

string ProdutoDuravel::getDurabilidade(){
    return this->durabilidade;
}
