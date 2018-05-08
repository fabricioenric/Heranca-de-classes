#ifndef CARRO_HPP_INCLUDED
#define CARRO_HPP_INCLUDED

using namespace std;

class Carro : public ProdutoDuravel {
    private:
        double velmax;
        string combustivel;

    public:
        Carro();
        void setVelmax(double velmax);
        double getVelmax();
        void setCombustivel(string combustivel);
        string getCombustivel();
};

#endif // CARRO_HPP_INCLUDED
