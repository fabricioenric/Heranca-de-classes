#ifndef PIZZA_HPP_INCLUDED
#define PIZZA_HPP_INCLUDED

using namespace std;

class Pizza : public ProdutonaoDuravel {
    private:
        string sabor;
        int fatias;

    public:
        Pizza();
        void setSabor(string sabor);
        string getSabor();
        void setFatias(int fatias);
        int getFatias();
};

#endif // PIZZA_HPP_INCLUDED
