#ifndef REFRIGERANTE_HPP_INCLUDED
#define REFRIGERANTE_HPP_INCLUDED

using namespace std;

class Refrigerante : public ProdutonaoDuravel {
    private:
        string sabores;
        string cor;

    public:
        Refrigerante();
        void setSabores(string sabores);
        string getSabores();
        void setCor(string cor);
        string getCor();
};

#endif // REFRIGERANTE_HPP_INCLUDED
