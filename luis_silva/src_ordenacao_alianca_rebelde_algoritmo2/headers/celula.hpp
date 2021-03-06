#ifndef CELULA_CIV
#define CELULA_CIV

#include <iostream>
#include <string>

class CelulaCiv{
    private:
        int distancia;
        int populacao;
        std::string nome;

    public:
        CelulaCiv();
        CelulaCiv(int distancia, int populacao, std::string nome);

        int getDistancia();
        int getPopulacao();
        std::string getNome();

        void setDistancia(int);
        void setPopulacao(int);
        void setNome(std::string);

        ~CelulaCiv();
};

#endif