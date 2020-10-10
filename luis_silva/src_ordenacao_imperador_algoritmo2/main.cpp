/*
O método escolhido para o algorítmo 2 do imperador
foi o Insertion Sort
*/

#include <cstdio>
#include <iostream>
#include <string>
#include "headers/celula.hpp"
#include "headers/insertion.hpp"


int main(){

    int n_linhas, i;
    CelulaCiv civilizacoes[2000000];
    int tamanho_array = 0;
    int distancia_civ, populacao_civ;
    std::string nome_civ;

    std::cin >> n_linhas;

    for(i = 0; i < n_linhas; i++){
        std::cin >> nome_civ;
        std::cin >> distancia_civ;
        std::cin >> populacao_civ;

        civilizacoes[i].setNome(nome_civ);
        civilizacoes[i].setDistancia(distancia_civ);
        civilizacoes[i].setPopulacao(populacao_civ);
        tamanho_array++;
    }

    std::cout << civilizacoes[0].getDistancia() << std::endl;

    return 0;
}