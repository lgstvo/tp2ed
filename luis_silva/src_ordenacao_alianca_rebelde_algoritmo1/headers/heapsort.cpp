#include <iostream>
#include <string>
#include "celula.hpp"

void constroiHeap(CelulaCiv civilizacoes[], int tamanho_heap, int item_posicao){
    int maior_item = item_posicao;
    int filho_esquerdo = 2*maior_item + 1;
    int filho_direito = 2*maior_item + 2;

    if(civilizacoes[filho_esquerdo].getDistancia() == civilizacoes[maior_item].getDistancia()){
        if(filho_esquerdo < tamanho_heap && civilizacoes[filho_esquerdo].getPopulacao() < civilizacoes[maior_item].getPopulacao()){
            maior_item = filho_esquerdo;
        }
    }
    if(filho_esquerdo < tamanho_heap && civilizacoes[filho_esquerdo].getDistancia() > civilizacoes[maior_item].getDistancia()){
        maior_item = filho_esquerdo;
    }

    if(civilizacoes[filho_direito].getDistancia() == civilizacoes[maior_item].getDistancia()){
        if(filho_direito < tamanho_heap && civilizacoes[filho_direito].getPopulacao() < civilizacoes[maior_item].getPopulacao()){
            maior_item = filho_direito;
        }
    }
    if(filho_direito < tamanho_heap && civilizacoes[filho_direito].getDistancia() > civilizacoes[maior_item].getDistancia()){
        maior_item = filho_direito;
    }

    if(maior_item != item_posicao){
        CelulaCiv troca;

        troca = civilizacoes[maior_item];
        civilizacoes[maior_item] = civilizacoes[item_posicao];
        civilizacoes[item_posicao] = troca;

        constroiHeap(civilizacoes, tamanho_heap, maior_item);
    }

}

void heapsort(CelulaCiv civilizacoes[], int tamanho_array){
    int meio = tamanho_array/2 -1;

    for(int i = meio; i >= 0; i--){
        constroiHeap(civilizacoes, tamanho_array, i);
    }

    CelulaCiv troca;

    for(int i = tamanho_array-1; i >=0; i--){
        troca = civilizacoes[i];
        civilizacoes[i] = civilizacoes[0];
        civilizacoes[0] = troca;

        constroiHeap(civilizacoes, i, 0);
    }
}
