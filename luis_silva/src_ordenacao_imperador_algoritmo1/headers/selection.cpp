#include <iostream>
#include <string>
#include "celula.hpp"

void selectionsort(CelulaCiv civilizacoes[], int ultimo){
    CelulaCiv swap_aux;
    int menor;
    
    
    for(int i = 0; i < ultimo; i++){
        menor = i;
        for(int j = i; j < ultimo; j++){
            if(civilizacoes[j].getDistancia() == civilizacoes[menor].getDistancia()){
                if(civilizacoes[j].getPopulacao() > civilizacoes[menor].getPopulacao()){
                    menor = j;
                }
            }
            else{
                if(civilizacoes[j].getDistancia() < civilizacoes[menor].getDistancia()){
                    menor = j;
                }
            }
        }
        swap_aux = civilizacoes[i];
        civilizacoes[i] = civilizacoes[menor];
        civilizacoes[menor] = swap_aux;
    }
}