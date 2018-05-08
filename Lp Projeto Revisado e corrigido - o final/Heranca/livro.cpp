#include <iostream>
#include "livro.hpp"

using namespace std;

Livro::Livro(){
    this->autor = " ";
    this->paginas = 0;
}

void Livro::setAutor(string autor){
    this->autor = autor;
}

string Livro::getAutor(){
    return this->autor;
}

void Livro::setPaginas(int paginas){
    this->paginas = paginas;
}

int Livro::getPaginas(){
    return this->paginas;
}
