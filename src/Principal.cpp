#include <bits/stdc++.h>
#include <conio.h>
#include "Jogador.h"
#include "Boss.h"
using namespace std;
int main()
{
    //cout<<"Bem Vindo ao Jogo de Briga\n";
    srand(time(nullptr));

    Jogador j("Heroi", 100);
    Boss b("Dragao", 150);

    int selecionar=0;
    string options[]={"Corte", "Ataque giratorio", "Estocada", "Sair"};
    char key;

    while(j.estaVivo() and b.estaVivo()){
        system("cls");

        cout<<"\n"<<j.getNome()<<" (Vida: "<<j.getVida()<<")";
        cout<<"  vs  "<<b.getNome()<<" (Vida: "<<b.getVida()<< ")\n";

        cout<<"Escolha seu golpe:\n";
        for(int i=0; i<4; i++)
        {
            if(i==selecionar)
            {
                cout<<"> "<<options[i]<<'\n';
            }
            else
            {
                cout<<" "<<options[i]<<'\n';
            }
        }
        key=getch();
        if (key==72 && selecionar>0) selecionar--;   // Seta para cima
        if (key==80 && selecionar<3) selecionar++;   // Seta para baixo
        if (key==13){
            if(selecionar==3){
                cout<<"Voce desistiu da luta\n";
                break;
            }
            j.atacar(b);
            
            if(!b.estaVivo()){
                cout<<b.getNome()<<" foi derrotado\n";
                break;
            }
            //boss pode desviar
            if(rand()%5==0) b.desviar();
            else b.atacar(j);

            if(!j.estaVivo()){
                cout<<j.getNome()<<" foi derrotado!\n";
                break;
            }
        }

    }
    cout<<"\n=== FIM DA BATALHA ===\n";
    if(j.estaVivo() && !b.estaVivo()) cout<<j.getNome()<<" venceu!\n";
    else if(b.estaVivo() && !j.estaVivo()) cout<<b.getNome()<<" venceu!\n";
    
    system("pause");
    return 0;

}