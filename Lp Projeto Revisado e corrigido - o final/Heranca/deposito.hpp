#ifndef DEPOSITO_HPP_INCLUDED
#define DEPOSITO_HPP_INCLUDED

using namespace std;

class Deposito{
    private:
        int qtdprodutos;
        double somaprecos;

    public:
        Deposito();
        Deposito(int qtdprodutos, double somaprecos);
        int getQtdprodutos();
        double getSomaprecos();
        void setSomaprecos(double somaprecos);
        void adicionar();
        void remover();
        void informaQtd();
        void vazio();
};





#endif // DEPOSITO_HPP_INCLUDED
