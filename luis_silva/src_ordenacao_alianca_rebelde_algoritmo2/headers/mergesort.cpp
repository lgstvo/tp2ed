#include <iostream>
#include <string>
#include "celula.hpp"

void merge(CelulaCiv civilizacoes[], int inicio, int meio, int fim){
    int numeros_esquerda = meio -inicio + 1;
    int numeros_direita = fim - meio;

    CelulaCiv *array_esquerda = new CelulaCiv[numeros_esquerda];
    CelulaCiv *array_direita = new CelulaCiv[numeros_direita];

    for(int i = 0; i < numeros_esquerda; i++){
        array_esquerda[i] = civilizacoes[inicio + i];
    }

    for(int j = 0; j < numeros_direita; j++){
        array_direita[j] = civilizacoes[meio + 1 + j];
    }
    
    int index_esquerda = 0; 
    int index_direita = 0;  
    int index_merged = inicio; 
      
    while (index_esquerda < numeros_esquerda && index_direita < numeros_direita) 
    { 
        if(array_esquerda[index_esquerda].getDistancia() == array_direita[index_direita].getDistancia()){
            if(array_esquerda[index_esquerda].getPopulacao() > array_direita[index_direita].getPopulacao()){
                civilizacoes[index_merged] = array_esquerda[index_esquerda]; 
                index_esquerda++; 
            } 
            else 
            { 
                civilizacoes[index_merged] = array_direita[index_direita]; 
                index_direita++; 
            } 
        }
        else{
            if(array_esquerda[index_esquerda].getDistancia() < array_direita[index_direita].getDistancia()){
                civilizacoes[index_merged] = array_esquerda[index_esquerda]; 
                index_esquerda++; 
            } 
            else 
            { 
                civilizacoes[index_merged] = array_direita[index_direita]; 
                index_direita++; 
            } 
        }
        index_merged++; 
    } 

    while (index_esquerda < numeros_esquerda)  
    { 
        civilizacoes[index_merged] = array_esquerda[index_esquerda]; 
        index_esquerda++; 
        index_merged++; 
    } 

    while (index_direita < numeros_direita) 
    { 
        civilizacoes[index_merged] = array_direita[index_direita]; 
        index_direita++; 
        index_merged++; 
    } 
}

void mergesort(CelulaCiv civilizacoes[], int inicio, int fim){

    if (inicio < fim){
        int meio = (inicio + fim)/2;
        mergesort(civilizacoes, inicio, meio);
        mergesort(civilizacoes, meio+1, fim);

        merge(civilizacoes, inicio, meio, fim);
    }
}

