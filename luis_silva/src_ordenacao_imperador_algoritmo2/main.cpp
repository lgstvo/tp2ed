#include <iostream>
#include <string>
#include "headers/celula.hpp"
#include "headers/bubble.cpp"


int main(){

    int n_linhas, i, n_civilizacoes;
    int distancia_civ, populacao_civ;
    std::string nome_civ;

    n_civilizacoes = 0;
    CelulaCiv *civilizacoes = new CelulaCiv[2000000];

    std::cin >> n_linhas;;

    for(i = 0; i < n_linhas; i++){

        std::cin >> nome_civ;
        std::cin >> distancia_civ;
        std::cin >> populacao_civ;

        civilizacoes[i].setNome(nome_civ);
        civilizacoes[i].setDistancia(distancia_civ);
        civilizacoes[i].setPopulacao(populacao_civ);
        n_civilizacoes++;
    }

    //clock_t start = clock();

    bubblesort(civilizacoes, n_civilizacoes);

    //clock_t end = clock();
    //std::cout << "ETDA: " << (end - start) / double(CLOCKS_PER_SEC) << "seconds" << std::endl;

    for(int i = 0; i < n_civilizacoes; i++){
        std::cout << civilizacoes[i].getNome() << " " << civilizacoes[i].getDistancia() << " " << civilizacoes[i].getPopulacao() << std::endl;
    }

    return 0;
}
