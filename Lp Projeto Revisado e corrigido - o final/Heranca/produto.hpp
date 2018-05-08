#ifndef PRODUTO_HPP_INCLUDED
#define PRODUTO_HPP_INCLUDED

using namespace std;

class Produto{
    protected:
        string nome;
        string marca;
        string descricao;
        double preco;
        int fabricacao;

    public:
        Produto();
        void setNome(string nome);
        string getNome();
        void setMarca(string marca);
        string getMarca();
        void setDescricao(string descricao);
        string getDescricao();
        void setPreco(double preco);
        double getPreco();
        void setFabricacao(int fabricacao);
        int getFabricacao();
};

#endif // PRODUTO_HPP_INCLUDED
