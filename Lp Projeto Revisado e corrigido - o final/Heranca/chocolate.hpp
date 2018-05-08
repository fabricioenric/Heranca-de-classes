#ifndef CHOCOLATE_HPP_INCLUDED
#define CHOCOLATE_HPP_INCLUDED

using namespace std;

class Chocolate : public ProdutonaoDuravel {
    private:
        string tipo;
        string formato;

    public:
        Chocolate();
        void setTipo(string tipo);
        string getTipo();
        void setFormato(string formato);
        string getFormato();
};


#endif // CHOCOLATE_HPP_INCLUDED
