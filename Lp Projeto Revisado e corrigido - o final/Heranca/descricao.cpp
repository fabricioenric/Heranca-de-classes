#include <iostream>
#include "descricao.hpp"
#include "carro.hpp"
#include "livro.hpp"
#include "celular.hpp"
#include "pizza.hpp"
#include "refrigerante.hpp"
#include "chocolate.hpp"
#include <string>

using namespace std;

void descCarro(){
            Carro ca;
            string a,b,c,f,g,i;
            double d,h;
            int e;

            cout << "Nome: " << endl;
            cout << "Marca: " << endl;
            cout << "Descricao do produto: " << endl;
            cout << "Preco do produto: " << endl;
            cout << "Ano de fabricacao: " << endl;
            cout << "Material predominante: " << endl;
            cout << "Durabilidade do produto: " << endl;
            cout << "Velocidade maxima: " << endl;
            cout << "Tipo de abastecimento: " << endl << endl << endl;
            cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;

            ca.setNome(a);
            ca.setMarca(b);
            ca.setDescricao(c);
            ca.setPreco(d);
            ca.setFabricacao(e);
            ca.setPredominante(f);
            ca.setDurabilidade(g);
            ca.setVelmax(h);
            ca.setCombustivel(i);

            cout << "---------- Carro -----------" << endl << endl;
            cout << "Nome: " << ca.getNome() << endl;
            cout << "Marca: " << ca.getMarca() << endl;
            cout << "Descricao: " << ca.getDescricao() << endl;
            cout << "Preco: " << ca.getPreco() << " R$" << endl;
            cout << "Ano de fabricacao: " << ca.getFabricacao() << endl;
            cout << "Material predominante: " << ca.getPredominante() << endl;
            cout << "Durabilidade do produto: " << ca.getDurabilidade() << endl;
            cout << "Velocidade maxima: " << ca.getVelmax() << " Km/h" << endl;
            cout << "Tipo de abastecimento: " << ca.getCombustivel() << endl << endl << endl;
}

void descLivro(){
            Livro li;
            string j,k,l,o,p,q;
            double m;
            int n,r;

            cout << "Nome: " << endl;
            cout << "Livraria disponivel: " << endl;
            cout << "Descricao do produto: " << endl;
            cout << "Preco do produto: " << endl;
            cout << "Ano de fabricacao: " << endl;
            cout << "Material predominante: " << endl;
            cout << "Durabilidade do produto: " << endl;
            cout << "Autor: " << endl;
            cout << "Quantidade de paginas: " << endl << endl << endl;

            cin >> j >> k >> l >> m >> n >> o >> p >> q >> r;

            li.setNome(j);
            li.setMarca(k);
            li.setDescricao(l);
            li.setPreco(m);
            li.setFabricacao(n);
            li.setPredominante(o);
            li.setDurabilidade(p);
            li.setAutor(q);
            li.setPaginas(r);

            cout << "---------- Livro -----------" << endl << endl;
            cout << "Nome: " << li.getNome() << endl;
            cout << "Livraria disponivel: " << li.getMarca() << endl;
            cout << "Descricao: " << li.getDescricao() << endl;
            cout << "Preco na livraria: " << li.getPreco() << " R$" << endl;
            cout << "Foi escrito no ano de: " << li.getFabricacao() << endl;
            cout << "Material predominante: " << li.getPredominante() << endl;
            cout << "Durabilidade do produto: " << li.getDurabilidade() << endl;
            cout << "Autor: " << li.getAutor() << endl;
            cout << "Quantidade de paginas totais: " << li.getPaginas() << endl << endl << endl;
}

void descCelular(){
            Celular ce;
            string s,tt,u,w,y;
            double v;
            int x,z,zz;

            cout << "Nome: " << endl;
            cout << "Marca: " << endl;
            cout << "Descricao do produto: " << endl;
            cout << "Preco do produto: " << endl;
            cout << "Ano de fabricacao: " << endl;
            cout << "Material predominante: " << endl;
            cout << "Durabilidade do produto: " << endl;
            cout << "Numero de funcionalidades: " << endl;
            cout << "Duracao da bateria: " << endl << endl << endl;

            cin >> s >> tt >> u >> v >> x >> w >> y >> z >> zz;

            ce.setNome(s);
            ce.setMarca(tt);
            ce.setDescricao(u);
            ce.setPreco(v);
            ce.setFabricacao(x);
            ce.setPredominante(w);
            ce.setDurabilidade(y);
            ce.setFuncionalidades(z);
            ce.setBateria(zz);

            cout << "---------- Celular -----------" << endl << endl;
            cout << "Nome: " << ce.getNome() << endl;
            cout << "Livraria disponivel: " << ce.getMarca() << endl;
            cout << "Descricao: " << ce.getDescricao() << endl;
            cout << "Preco na livraria: " << ce.getPreco() << " R$" << endl;
            cout << "Foi escrito no ano de: " << ce.getFabricacao() << endl;
            cout << "Material predominante: " << ce.getPredominante() << endl;
            cout << "Durabilidade do produto: " << ce.getDurabilidade() << endl;
            cout << "Numero de funcionalidade totais: " << ce.getFuncionalidades() << endl;
            cout << "Duracao da bateria em horas: " << ce.getBateria() << " hora(s)" << endl << endl << endl;
}

void descPizza(){
            Pizza pi;
            string aa,bb,cc,dd;
            double ee;
            int ff,gg,hh;

            cout << "Nome: " << endl;
            cout << "Restaurante: " << endl;
            cout << "Descricao do produto: " << endl;
            cout << "Preco do produto: " << endl;
            cout << "Foi feita a: " << endl;
            cout << "Validade de: " << endl;
            cout << "Sabor: " << endl;
            cout << "Tamanho: " << endl << endl << endl;

            cin >> aa >> bb >> cc >> dd >> ee >> ff >> gg >> hh;

            pi.setNome(aa);
            pi.setMarca(bb);
            pi.setDescricao(cc);
            pi.setPreco(ee);
            pi.setFabricacao(ff);
            pi.setValidade(gg);
            pi.setSabor(dd);
            pi.setFatias(hh);

            cout << "---------- Pizza -----------" << endl << endl;
            cout << "Nome: " << pi.getNome() << endl;
            cout << "Restaurante: " << pi.getMarca() << endl;
            cout << "Descricao: " << pi.getDescricao() << endl;
            cout << "Preco: " << pi.getPreco() << " R$" << endl;
            cout << "Foi feita a: " << pi.getFabricacao() << endl;
            cout << "Genero: Alimenticio" << endl;
            cout << "Validade do produto de: " << pi.getValidade() << " Dia(s)" << endl;
            cout << "Sabor: " << pi.getSabor() << endl;
            cout << "Tamanho de " << pi.getFatias() << " Fatia(s)" << endl << endl << endl;

}

void descRefrigerante(){
            Refrigerante re;
            string jj,kk,ll,oo,qq,rr;
            double mm;
            int nn,pp;

            cout << "Nome: " << endl;
            cout << "Marca: " << endl;
            cout << "Descricao do produto: " << endl;
            cout << "Preco do produto: " << endl;
            cout << "Foi feita a: " << endl;
            cout << "Validade de: " << endl;
            cout << "Sabor: " << endl;
            cout << "Tamanho: " << endl << endl << endl;
            cin >> jj >> kk >> ll >> mm >> nn >> oo >> pp >> qq >> rr;

            re.setNome(jj);
            re.setMarca(kk);
            re.setDescricao(ll);
            re.setPreco(mm);
            re.setFabricacao(nn);
            re.setValidade(pp);
            re.setSabores(qq);
            re.setCor(rr);

            cout << "---------- Refrigerante -----------" << endl << endl;
            cout << "Nome: " << re.getNome() << endl;
            cout << "Marca: " << re.getMarca() << endl;
            cout << "Descricao: " << re.getDescricao() << endl;
            cout << "Preco: " << re.getPreco() << " R$" << endl;
            cout << "Foi feito a: " << re.getFabricacao() << endl;
            cout << "Genero: Alimenticio" << endl;
            cout << "Validade de: " << re.getValidade() << endl;
            cout << "Sabor de: " << re.getSabores() << endl;
            cout << "Coloracao: " << re.getCor() << endl << endl << endl;

}

void descChocolate(){
            Chocolate ch;
            string ss,ttt,uu,yy,zzz,zzzz;
            double vv;
            int ww,xx;

            cout << "Nome: " << endl;
            cout << "Marca: " << endl;
            cout << "Descricao do produto: " << endl;
            cout << "Preco do produto: " << endl;
            cout << "Foi feita a: " << endl;
            cout << "Validade de: " << endl;
            cout << "Sabor: " << endl;
            cout << "Tamanho: " << endl << endl << endl;
            cin >> ss >> ttt >> uu >> vv >> ww >> yy >> xx >> zzz >> zzzz;

            ch.setNome(ss);
            ch.setMarca(ttt);
            ch.setDescricao(uu);
            ch.setPreco(vv);
            ch.setFabricacao(ww);
            ch.setValidade(xx);
            ch.setTipo(zzz);
            ch.setFormato(zzzz);

            cout << "---------- Chocolate -----------" << endl << endl;
            cout << "Nome: " << ch.getNome() << endl;
            cout << "Marca: " << ch.getMarca() << endl;
            cout << "Descricao: " << ch.getDescricao() << endl;
            cout << "Preco: " << ch.getPreco() << " R$" << endl;
            cout << "Foi feito a: " << ch.getFabricacao() << endl;
            cout << "Genero: Alimenticio" << endl;
            cout << "Validade de: " << ch.getValidade() << endl;
            cout << "Tipo: " << ch.getTipo() << endl;
            cout << "Formato: " << ch.getFormato() << endl << endl << endl;

}
