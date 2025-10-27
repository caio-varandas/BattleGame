#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>

class Personagem{
    protected:
        std::string nome;
        int vida;
    public:
        Personagem(std::string n, int v);
        virtual void desviar()=0;
        virtual void atacar(Personagem& alvo)=0;

        void levarDano(int dano);
        bool estaVivo() const;
        std::string getNome() const;
        int getVida() const;

        virtual ~Personagem()=default;
};

#endif