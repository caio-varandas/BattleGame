#ifndef BOSS_H
#define BOSS_H

#include "Personagem.h"

class Boss : public Personagem{
    public:
        Boss(std::string n, int v);

        void atacar(Personagem& alvo) override;
        void desviar() override;
};

#endif