#include <iostream>
#include "produto.hpp"
#include "produto.cpp"
#include "produtoduravel.hpp"
#include "produtoduravel.cpp"
#include "produtonaoduravel.hpp"
#include "produtonaoduravel.cpp"
#include "carro.hpp"
#include "carro.cpp"
#include "livro.hpp"
#include "livro.cpp"
#include "celular.hpp"
#include "celular.cpp"
#include "pizza.hpp"
#include "pizza.cpp"
#include "refrigerante.hpp"
#include "refrigerante.cpp"
#include "chocolate.hpp"
#include "chocolate.cpp"
#include "descricao.hpp"
#include "descricao.cpp"
#include "deposito.hpp"
#include "deposito.cpp"
#include <stdlib.h>

using namespace std;

int main()
{
    Deposito depos(0, 0.0);
    Carro c;
    Livro l;
    Celular ce;
    Pizza p;
    Refrigerante r;
    Chocolate ch;

    double preco1=0.0,preco2=0.0,preco3=0.0,preco4=0.0,preco5=0.0,preco6=0.0,preco7=0.0,preco8=0.0,preco9=0.0,preco10=0.0,preco11=0.0,preco12=0.0,x=0.0,vet[depos.getQtdprodutos()];
    int t,dur,tp1,tp2,d,q,b;
    string menu;

    cout << endl << "Digite menu para visualizar o menu de opcoes." << endl << endl;
    cin >> menu;

    if(menu == "menu"){
    do{

    cout << endl << "Digite 1 para visualizar a exemplificacao de como sera mostrado as principais caracteristicas de um produto." << endl;
    cout << "Digite 2 para LISTAR as informacoes de seu produto." << endl;
    cout << "Digite 3 para acessar o deposito de produtos." << endl;
    cout << "Digite 0 para sair." << endl;
    cout << endl;
    cin >> t;

    switch(t){
    case 0:
    exit(1);
    break;

    case 1:
    c.setNome("Astra");
    c.setMarca("Chevrolet");
    c.setDescricao("Cor Prateada");
    c.setPreco(22000.00);
    c.setFabricacao(2006);
    c.setPredominante("Alumunio");
    c.setDurabilidade("10 anos");
    c.setVelmax(210);
    c.setCombustivel("Flex");

    cout << endl << "---------- Carro -----------" << endl << endl;
    cout << "Nome: " << c.getNome() << endl;
    cout << "Marca: " << c.getMarca() << endl;
    cout << "Descricao: " << c.getDescricao() << endl;
    cout << "Preco: " << c.getPreco() << " R$" << endl;
    cout << "Ano de fabricacao: " << c.getFabricacao() << endl;
    cout << "Material predominante: " << c.getPredominante() << endl;
    cout << "Durabilidade do produto: " << c.getDurabilidade() << endl;
    cout << "Velocidade maxima: " << c.getVelmax() << " Km/h" << endl;
    cout << "Tipo de abastecimento: " << c.getCombustivel() << endl << endl << endl;


    l.setNome("Dom Casmurro");
    l.setMarca("Saraiva");
    l.setDescricao("Romance");
    l.setPreco(60.75);
    l.setFabricacao(1899);
    l.setPredominante("Celulose");
    l.setDurabilidade("50 anos");
    l.setAutor("Machado de Assis");
    l.setPaginas(223);

    cout << "---------- Livro -----------" << endl << endl;
    cout << "Nome: " << l.getNome() << endl;
    cout << "Livraria disponivel: " << l.getMarca() << endl;
    cout << "Descricao: " << l.getDescricao() << endl;
    cout << "Preco na livraria: " << l.getPreco() << " R$" << endl;
    cout << "Foi escrito no ano de: " << l.getFabricacao() << endl;
    cout << "Material predominante: " << l.getPredominante() << endl;
    cout << "Durabilidade do produto: " << l.getDurabilidade() << endl;
    cout << "Autor: " << l.getAutor() << endl;
    cout << "Quantidade de paginas totais: " << l.getPaginas() << endl << endl << endl;


    ce.setNome("iPhone 5");
    ce.setMarca("Apple");
    ce.setDescricao("Bom desempenho, muitas funcionalidades e 4G");
    ce.setPreco(4200.50);
    ce.setFabricacao(2008);
    ce.setPredominante("Cobalto");
    ce.setDurabilidade("6 anos");
    ce.setFuncionalidades(20);
    ce.setBateria(12);

    cout << "---------- Celular -----------" << endl << endl;
    cout << "Nome: " << ce.getNome() << endl;
    cout << "Marca: " << ce.getMarca() << endl;
    cout << "Descricao: " << ce.getDescricao() << endl;
    cout << "Preco: " << ce.getPreco() << " R$" << endl;
    cout << "Ano de fabricacao: " << ce.getFabricacao() << endl;
    cout << "Material predominante: " << ce.getPredominante() << endl;
    cout << "Durabilidade do produto: " << ce.getDurabilidade() << endl;
    cout << "Quantidade de funcionalidades: " << ce.getFuncionalidades() << endl;
    cout << "Horas de duracao da bateria: " << ce.getBateria() << endl << endl << endl;


    p.setNome("Penetra");
    p.setMarca("Casa da Pizza");
    p.setDescricao("Contem Calabresa, Bacon, Champignon, Cebola e Oregano como ingredientes");
    p.setPreco(35.00);
    p.setFabricacao(1);
    p.setGenero("Alimenticio");
    p.setValidade(2);
    p.setSabor("Bacon e Cogumelos");
    p.setFatias(10);

    cout << "---------- Pizza -----------" << endl << endl;
    cout << "Nome: " << p.getNome() << endl;
    cout << "Restaurante: " << p.getMarca() << endl;
    cout << "Descricao: " << p.getDescricao() << endl;
    cout << "Preco: " << p.getPreco() << " R$" << endl;
    cout << "Feita a: " << p.getFabricacao() << " Hora(s)" << endl;
    cout << "Genero: " << p.getGenero() << endl;
    cout << "Validade de: " << p.getValidade() << " Dia(s)" << endl;
    cout << "Sabor: " << p.getSabor() << endl;
    cout << "Tamanho: " << p.getFatias() << " Fatias" << endl << endl << endl;


    r.setNome("Fanta Laranja");
    r.setMarca("Coca-Cola");
    r.setDescricao("Bebida gasificada, ideal para festas");
    r.setPreco(6.50);
    r.setFabricacao(2);
    r.setGenero("Alimenticio");
    r.setValidade(7);
    r.setSabores("Laranja");
    r.setCor("Alaranjada");

    cout << "---------- Refrigerante -----------" << endl << endl;
    cout << "Nome: " << r.getNome() << endl;
    cout << "Marca: " << r.getMarca() << endl;
    cout << "Descricao: " << r.getDescricao() << endl;
    cout << "Preco: " << r.getPreco() << " R$" << endl;
    cout << "Feita a: " << r.getFabricacao() << " Dia(s)" << endl;
    cout << "Genero: " << r.getGenero() << endl;
    cout << "Validade de: " << r.getValidade() << " Dia(s)" << endl;
    cout << "Sabor: " << r.getSabores() << endl;
    cout << "Cor: " << r.getCor() << endl << endl << endl;


    ch.setNome("Tentacao");
    ch.setMarca("Ferrero Rocher");
    ch.setDescricao("Contem Amendoas e 75 por cento de Cacau");
    ch.setPreco(10.00);
    ch.setFabricacao(1);
    ch.setGenero("Alimenticio");
    ch.setValidade(2);
    ch.setTipo("Branco");
    ch.setFormato("Trufas");

    cout << "---------- Chocolate -----------" << endl << endl;
    cout << "Nome: " << ch.getNome() << endl;
    cout << "Marca: " << ch.getMarca() << endl;
    cout << "Descricao: " << ch.getDescricao() << endl;
    cout << "Preco: " << ch.getPreco() << " R$" << endl;
    cout << "Feito a: " << ch.getFabricacao() << " Dia(s)" << endl;
    cout << "Genero: " << ch.getGenero() << endl;
    cout << "Validade de: " << ch.getValidade() << " mes(s)" << endl;
    cout << "Tipo: " << ch.getTipo() << endl;
    cout << "Formato: " << ch.getFormato() << endl << endl << endl;
    break;

    case 2:
    cout << endl <<"Que tipo de produto gostaria de listar as principais caracteriscas? " << endl;
    cout << "1 - Produto Duravel." << endl;
    cout << "2 - Produto Nao-Duravel." << endl << endl;

    cin >> dur;
    switch(dur){
      case 1:
        cout << endl << "Qual produto Duravel? " << endl;
        cout << "1 - Um Carro." << endl;
        cout << "2 - Um Livro." << endl;
        cout << "3 - Um Celular." << endl << endl;

        cin >> tp1;

        switch(tp1){

            case 1:

            cout << endl;
            descCarro();
            break;


            case 2:

            cout << endl;
            descLivro();
            break;


            case 3:

            cout << endl;
            descCelular();
            break;
                    }

       case 2:
         cout << endl << "Qual produto Nao-Duravel? " << endl;
         cout << "1 - Uma Pizza." << endl;
         cout << "2 - Um Refrigerante." << endl;
         cout << "3 - Um Chocolate." << endl << endl;

         cin >> tp2;

         switch(tp2){

            case 1:

            cout << endl;
            descPizza();
            break;


            case 2:

            cout << endl;
            descRefrigerante();
            break;


            case 3:

            cout << endl;
            descChocolate();
            break;
                    }
                }
    break;

    case 3:

        do{
        cout << endl << "Operacoes disponiveis: " << endl;
        cout << "1 - Adicionar produto." << endl << "2 - Remover produto." << endl << "3 - Informar a quantidade de produtos." << endl << "4 - Informar se o deposito esta vazio." << endl << "5 - Informar produto com maior valor." << endl << "6 - Soma dos precos dos produtos." << endl << "0 - Sair do deposito." << endl << endl;
        cin >> d;

        switch(d){

        case 0:
        exit(1);
        break;

        case 1:
        cout << endl << "Qual produto gostaria de adicionar? 1 - Produto Duravel e 2 - Produto Nao-Duravel." << endl;
        cin >> q;
        if(q == 1){
        cout << endl << "Que tipo de Produto Duravel? 1 - Carro, 2 - Livro e 3 - Celular." << endl;
          cout << endl;
          cin >> b;
          if(b == 1){
            cout << endl << "Informe o preco do Carro: " << endl;
            cout << endl;
            cin >> preco1;
            depos.setSomaprecos(preco1);
            depos.adicionar();
            x += depos.getSomaprecos();
            for(int i = depos.getQtdprodutos(); i <= depos.getQtdprodutos(); i++)
            vet[i] = depos.getSomaprecos();
            cout << endl << "Carro adicionado ao deposito com sucesso." << endl;
          }
          if(b == 2){
            cout << endl << "Informe o preco do Livro: " << endl;
            cout << endl;
            cin >> preco2;
            depos.setSomaprecos(preco2);
            depos.adicionar();
            x += depos.getSomaprecos();
            for(int i = depos.getQtdprodutos(); i <= depos.getQtdprodutos(); i++)
            vet[i] = depos.getSomaprecos();
            cout << endl << "Livro adicionado ao deposito com sucesso." << endl;
          }
          if(b == 3){
            cout << endl << "Informe o preco do Celular: " << endl;
            cout << endl;
            cin >> preco3;
            depos.setSomaprecos(preco3);
            depos.adicionar();
            x += depos.getSomaprecos();
            for(int i = depos.getQtdprodutos(); i <= depos.getQtdprodutos(); i++)
            vet[i] = depos.getSomaprecos();
            cout << endl << "Celular adicionado ao deposito com sucesso." << endl;
          }
        }
        if(q == 2){
        cout << endl << "Que tipo de Produto Nao-Duravel? 1 - Pizza, 2 - Refrigerante e 3 - Chocolate:" << endl;
          cout << endl;
          cin >> b;
          if(b == 1){
            cout << endl << "Informe o preco da Pizza: " << endl;
            cin >> preco4;
            depos.setSomaprecos(preco4);
            depos.adicionar();
            x += depos.getSomaprecos();
            for(int i = depos.getQtdprodutos(); i <= depos.getQtdprodutos(); i++)
            vet[i] = depos.getSomaprecos();
            cout << endl << "Pizza adicionada ao deposito com sucesso." << endl;
          }
          if(b == 2){
            cout << endl << "Informe o preco do Refrigerante: " << endl;
            cout << endl;
            cin >> preco5;
            depos.setSomaprecos(preco5);
            depos.adicionar();
            x += depos.getSomaprecos();
            for(int i = depos.getQtdprodutos(); i <= depos.getQtdprodutos(); i++)
            vet[i] = depos.getSomaprecos();
            cout << endl << "Refrigerante adicionado ao deposito com sucesso." << endl;
          }
          if(b == 3){
            cout << endl << "Informe o preco do Chocolate: " << endl;
            cout << endl;
            cin >> preco6;
            depos.setSomaprecos(preco6);
            depos.adicionar();
            x += depos.getSomaprecos();
            for(int i = depos.getQtdprodutos(); i <= depos.getQtdprodutos(); i++)
            vet[i] = depos.getSomaprecos();
            cout << endl << "Chocolate adicionado ao deposito com sucesso." << endl << endl;
          }
        }
        break;

        case 2:
        cout << endl << "Qual produto gostaria de remover? 1 - Produto Duravel e 2 - Produto Nao-Duravel:" << endl;
        cout << endl;
        cin >> q;
        if(q == 1){
        cout << endl << "Que tipo de Produto Duravel? 1 - Carro, 2 - Livro e 3 - Celular:" << endl;
          cin >> b;
          if(b == 1){
            cout << endl << "Informe o preco do ultimo Carro adicionado: " << endl;
            cin >> preco7;
              depos.setSomaprecos(preco7);
              if(preco7 == preco1){
                depos.remover();
                x -= depos.getSomaprecos();
                cout << endl << "Ultimo Carro adicionado foi removido." << endl;
              }
              else
                cout << endl << "O deposito nao possui carros com este preco armazenados." << endl;
          }
          if(b == 2){
            cout << "Informe o preco do ultimo Livro adicionado: " << endl;
            cout << endl;
            cin >> preco8;
              depos.setSomaprecos(preco8);
              if(preco8 == preco2){
                depos.remover();
                x -= depos.getSomaprecos();
                cout << endl << "Ultimo Livro adicionado foi removido." << endl;
              }
              else
                cout << endl << "O deposito nao possui livros armazenados." << endl;
          }
          if(b == 3){
            cout << "Informe o preco do ultimo Celular adicionado: " << endl;
            cout << endl;
            cin >> preco9;
              depos.setSomaprecos(preco9);
              if(preco9 == preco3){
                depos.remover();
                x -= depos.getSomaprecos();
                cout << endl <<"Ultimo Celular adicionado foi removido." << endl;
              }
              else
                cout << endl << "O deposito nao possui livros com este preco armazenados." << endl;
          }
        }
        if(q == 2){
          cout << "Que tipo de Produto Nao-Duravel? 1 - Pizza, 2 - Refrigerante e 3 - Chocolate." << endl;
          cout << endl;
          cout << endl;
          cin >> b;
          if(b == 1){
            cout << "Informe o preco da ultima Pizza adicionada: " << endl;
            cin >> preco10;
              depos.setSomaprecos(preco10);
              if(preco10 == preco4){
                depos.remover();
                x -= depos.getSomaprecos();
                cout << endl << "Ultima Pizza adicionada foi removida." << endl;
              }
              else
                cout << endl << "O deposito nao possui pizzas com este preco armazenadas." << endl;
          }
          if(b == 2){
            cout << "Informe o preco do ultimo Refrigerante adicionado: " << endl << endl;
            cout << endl;
            cin >> preco11;
              depos.setSomaprecos(preco11);
              if(preco11 == preco5){
                depos.remover();
                x -= depos.getSomaprecos();
                cout << endl << "Ultimo Refrigerante adicionado foi removido." << endl;
              }
              else
                cout << endl << "O deposito nao possui refrigerantes com este preco armazenados." << endl;
          }
          if(b == 3){
            cout << "Informe o preco do ultimo Chocolate adicionado: " << endl << endl;
            cout << endl;
            cin >> preco12;
              depos.setSomaprecos(preco12);
              if(preco12 == preco6){
                depos.remover();
                x -= depos.getSomaprecos();
                cout << endl << "Ultimo Chocolate adicionado foi removido" << endl << endl;
              }
              else
                cout << endl << "O deposito nao possui chocolates com este preco armazenados." << endl << endl;
          }
        }
        break;

        case 3:
        depos.informaQtd();
        break;

        case 4:
        depos.vazio();
        break;

        case 5:
        cout << endl << "Maior valor do deposito em ordem crescente: " << endl << endl;
        for(int i = 1; i < depos.getQtdprodutos(); i++){
          if((x - vet[i]) < (x - vet[i+1]))
            cout << vet[i] << endl << endl;

         else
            cout << vet[i+1] << endl << endl;
                        }
        break;

        case 6:
        cout << endl << "Soma total dos precos dos produtos armazenados no deposito: " << x << endl << endl;
        break;

                    }
                }while(d > 0);
            }
       }while(t > 0);
    }
    return 0;
}
