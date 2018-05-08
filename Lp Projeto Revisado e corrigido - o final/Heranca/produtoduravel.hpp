#ifndef PRODUTODURAVEL_HPP_INCLUDED
#define PRODUTODURAVEL_HPP_INCLUDED

using namespace std;

class ProdutoDuravel : public Produto {
    protected:
        string predominante;
        string durabilidade;

    public:
        ProdutoDuravel();
        void setPredominante(string predominante);
        string getPredominante();
        void setDurabilidade(string durabilidade);
        string getDurabilidade();
};

#endif // PRODUTODURAVEL_HPP_INCLUDED
