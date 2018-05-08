#include <iostream>
#include "produto.hpp"

using namespace std;

Produto::Produto(){
    this->nome = " ";
    this->marca = " ";
    this->descricao = " ";
    this->preco = 0.0;
    this->fabricacao = 0;
}

void Produto::setNome(string nome){
    this->nome = nome;
}

string Produto::getNome(){
    return this->nome;
}

void Produto::setMarca(string marca){
    this->marca = marca;
}

string Produto::getMarca(){
    return this->marca;
}

void Produto::setDescricao(string descricao){
    this->descricao = descricao;
}

string Produto::getDescricao(){
    return this->descricao;
}

void Produto::setPreco(double preco){
    this->preco = preco;
}

double Produto::getPreco(){
    return this->preco;
}

void Produto::setFabricacao(int fabricacao){
    this->fabricacao = fabricacao;
}

int Produto::getFabricacao(){
    return this->fabricacao;
}
