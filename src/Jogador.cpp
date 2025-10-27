#include "Jogador.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Jogador::Jogador(string n, int v) : Personagem(n, v){}

void Jogador::atacar(Personagem& alvo){
    srand(time(nullptr));
    int sorte=(rand()%20)+1;
    int dano=0;
        if(sorte<5) dano=5;
        else if(sorte<=10) dano=10;
        else if(sorte<=15) dano=12;
        else dano=20;

        cout<<nome<<" ataca causando "<<dano<<" de dano!\n";
        alvo.levarDano(dano);
}
void Jogador::desviar(){
    cout<<nome<<" desviou de seu ataque!\n";
}