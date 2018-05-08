#include <iostream>
#include "deposito.hpp"

using namespace std;

Deposito::Deposito(){
    this->qtdprodutos = 0;
    this->somaprecos = 0.0;
}

Deposito::Deposito(int qtdprodutos, double somaprecos){
    this->qtdprodutos = qtdprodutos;
    this->somaprecos = somaprecos;
}

int Deposito::getQtdprodutos(){
    return this->qtdprodutos;
}

double Deposito::getSomaprecos(){
    return this->somaprecos;
}

void Deposito::setSomaprecos(double somaprecos){
    this->somaprecos = somaprecos;
}

void Deposito::adicionar(){
    qtdprodutos++;
}

void Deposito::remover(){
    if(qtdprodutos == 0)
      cout << "Nao foi possivel remover produtos pois os deposito esta vazio" << endl << endl;

    else
      qtdprodutos--;
}

void Deposito::informaQtd(){
    cout << "O deposito possui: " << getQtdprodutos() << " produtos" << endl << endl;
}

void Deposito::vazio(){
    if(getQtdprodutos() == 0)
      cout << "O deposito esta vazio" << endl << endl;

    else if(getQtdprodutos() > 0)
      cout << "O deposito nao esta vazio" << endl << endl;
}
