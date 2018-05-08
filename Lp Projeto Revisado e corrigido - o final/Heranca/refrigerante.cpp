#include <iostream>
#include "refrigerante.hpp"

using namespace std;

Refrigerante::Refrigerante(){
    this->sabores = " ";
    this->cor = " ";
}

void Refrigerante::setSabores(string sabores){
    this->sabores = sabores;
}

string Refrigerante::getSabores(){
    return this->sabores;
}

void Refrigerante::setCor(string cor){
    this->cor = cor;
}

string Refrigerante::getCor(){
    return this->cor;
}
