#include "Personagem.h"
#include <iostream>
using namespace std;

Personagem::Personagem(std::string n, int v) : nome(n), vida(v) {}

void Personagem::levarDano(int dano){
    vida-=dano;
    if(vida<=0) vida=0;
}

bool Personagem::estaVivo() const{
    return vida>0;
}

string Personagem::getNome() const{
    return nome;
}

int Personagem::getVida() const{
    return vida;
}