#ifndef LIVRO_HPP_INCLUDED
#define LIVRO_HPP_INCLUDED

using namespace std;

class Livro : public ProdutoDuravel {
    private:
        string autor;
        int paginas;

    public:
        Livro();
        void setAutor(string autor);
        string getAutor();
        void setPaginas(int paginas);
        int getPaginas();
};


#endif // LIVRO_HPP_INCLUDED
