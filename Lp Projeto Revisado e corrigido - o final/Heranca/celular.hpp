#ifndef CELULAR_HPP_INCLUDED
#define CELULAR_HPP_INCLUDED

using namespace std;

class Celular : public ProdutoDuravel {
    private:
        int funcionalidades;
        int bateria;

    public:
        Celular();
        void setFuncionalidades(int funcionalidades);
        int getFuncionalidades();
        void setBateria(int bateria);
        int getBateria();
};

#endif // CELULAR_HPP_INCLUDED
