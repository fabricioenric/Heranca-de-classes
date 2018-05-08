#include <iostream>
#include "pizza.hpp"

using namespace std;

Pizza::Pizza(){
    this->sabor = " ";
    this->fatias = 0;
}

void Pizza::setSabor(string sabor){
    this->sabor = sabor;
}

string Pizza::getSabor(){
    return this->sabor;
}

void Pizza::setFatias(int fatias){
    this->fatias = fatias;
}

int Pizza::getFatias(){
    return this->fatias;
}
