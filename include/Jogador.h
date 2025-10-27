#ifndef JOGADOR_H
#define JOGADOR_H

#include "Personagem.h"

class Jogador : public Personagem{
    public:
        Jogador(std::string n, int v);

        void atacar(Personagem& alvo) override;
        void desviar() override;
        
};

#endif