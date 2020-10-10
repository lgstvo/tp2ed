#include <iostream>
#include <string>
#include "headers/celula.hpp"
#include "headers/selection.cpp"

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

    selectionsort(civilizacoes, n_civilizacoes);

    for(int i = 0; i < n_civilizacoes; i++){
        std::cout << civilizacoes[i].getNome() << " " << civilizacoes[i].getDistancia() << " " << civilizacoes[i].getPopulacao() << std::endl;
    }

    return 0;
}
