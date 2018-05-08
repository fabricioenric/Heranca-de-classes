#ifndef PRODUTONAODURAVEL_HPP_INCLUDED
#define PRODUTONAODURAVEL_HPP_INCLUDED

using namespace std;

class ProdutonaoDuravel : public Produto {
    protected:
        string genero;
        int validade;

    public:
        ProdutonaoDuravel();
        void setGenero(string genero);
        string getGenero();
        void setValidade(int validade);
        int getValidade();
};

#endif // PRODUTONAODURAVEL_HPP_INCLUDED
