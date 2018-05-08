#include <iostream>
#include "carro.hpp"

using namespace std;

Carro::Carro(){
    this->velmax = 0.0;
    this->combustivel = " ";
}

void Carro::setVelmax(double velmax){
    this->velmax = velmax;
}

double Carro::getVelmax(){
    return this->velmax;
}

void Carro::setCombustivel(string combustivel){
    this->combustivel = combustivel;
}

string Carro::getCombustivel(){
    return this->combustivel;
}
