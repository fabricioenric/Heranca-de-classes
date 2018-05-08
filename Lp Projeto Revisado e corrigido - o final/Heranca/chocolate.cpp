#include <iostream>
#include "chocolate.hpp"

using namespace std;

Chocolate::Chocolate(){
    this->tipo = " ";
    this->formato = " ";
}

void Chocolate::setTipo(string tipo){
    this->tipo = tipo;
}

string Chocolate::getTipo(){
    return this->tipo;
}

void Chocolate::setFormato(string formato){
    this->formato = formato;
}

string Chocolate::getFormato(){
    return this->formato;
}
