#include <iostream>
#include "celular.hpp"

using namespace std;

Celular::Celular(){
    this->funcionalidades = 0;
    this->bateria = 0;
}

void Celular::setFuncionalidades(int funcionalidades){
    this->funcionalidades = funcionalidades;
}

int Celular::getFuncionalidades(){
    return this->funcionalidades;
}

void Celular::setBateria(int bateria){
    this->bateria = bateria;
}

int Celular::getBateria(){
    return this->bateria;
}
