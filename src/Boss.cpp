#include "Boss.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Boss::Boss(string n, int v) : Personagem(n, v){}

void Boss::atacar(Personagem& alvo){
    srand(time(nullptr)+1);
    int sorte=(rand()%20)+1;
    int dano=0;
        if(sorte<=8) dano=8;
        else if(sorte<=15) dano=15;
        else dano=25;

        cout<<nome<<" lança um golpe feroz causando "<<dano<<" de dano!\n";
        alvo.levarDano(dano);
}
void Boss::desviar(){
    cout<<nome<<" desviou de seu ataque!\n";
}