#include "celula.hpp"
#include <cstdio>
#include <iostream>
#include <string>

CelulaCiv::CelulaCiv(){
    this->distancia = -1;
    this->populacao = -1;
    this->nome = "none";
}

CelulaCiv::CelulaCiv(int distancia, int populacao, std::string nome){
    this->distancia = distancia;
    this->populacao = populacao;
    this->nome = nome;
}

int CelulaCiv::getDistancia(){
    return this->distancia;
}

int CelulaCiv::getPopulacao(){
    return this->populacao;
}

std::string CelulaCiv::getNome(){
    return this->nome;
}

void CelulaCiv::setDistancia(int distancia){
    this->distancia = distancia;
}

void CelulaCiv::setPopulacao(int populacao){
    this->populacao = populacao;
}

void CelulaCiv::setNome(std::string nome){
    this->nome = nome;
}