#include <iostream>
#include <string>
#include "celula.hpp"
#ifndef BUBBLE
#define BUBBLE

void bubblesort(CelulaCiv civilizacoes[], int ultimo){
    CelulaCiv swap_aux;
    
    for(int i = ultimo; i > 0; i--){
        for(int j = 0; j < (i-1); j++){
            if(civilizacoes[j].getDistancia() == civilizacoes[j+1].getDistancia()){
                if(civilizacoes[j].getPopulacao() < civilizacoes[j+1].getPopulacao()){
                    swap_aux = civilizacoes[j];
                    civilizacoes[j] = civilizacoes[j+1];
                    civilizacoes[j+1] = swap_aux;
                }
            }
            else{
                if(civilizacoes[j].getDistancia() > civilizacoes[j+1].getDistancia()){
                    swap_aux = civilizacoes[j];
                    civilizacoes[j] = civilizacoes[j+1];
                    civilizacoes[j+1] = swap_aux;
                }
            }
        }
    }
}

#endif