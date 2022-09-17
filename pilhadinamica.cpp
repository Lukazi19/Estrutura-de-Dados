#include <iostream>
#include "pilhadinamica.h"
#include <cstddef> // NULL

using namespace std;

    pilhadinamica::pilhadinamica()//construtor //dynamic stack
    {
        NoTopo = NULL;
    }

    pilhadinamica::~pilhadinamica() //destrutor
    {
        No* notemp;
        while(NoTopo != NULL){
            notemp = NoTopo;
            NoTopo = NoTopo -> proximo;
            delete notemp;
        }
    }

    bool pilhadinamica::estavazio()//isempty
    {
        return (NoTopo == NULL);
    }

    bool pilhadinamica::estacheio()//tem memória //isfull
    {
        No* NoNovo; 
        try{
            NoNovo = new No;
            delete NoNovo;
            return false;
        } catch(bad_alloc exception){
            return true;
        }
    }

    void pilhadinamica::inserir(TipoItem item) //push
    {
        if(estacheio()){
            cout << " a pilha está cheia!\n";
            cout << " não foi possivel inserir este elemento";
        } else{
            No* NoNovo = new No;
            NoNovo -> valor = item;
            NoNovo -> proximo = NoTopo;
            NoTopo = NoNovo;
        }
    }

    TipoItem pilhadinamica::remover() //pop
    {
        if (estavazio()){
            cout << " a pilha está vazia\n";
            cout << " não foi possivel remover nenhum elemento\n";
            return 0;
        } else{
            No* Notemp;
            Notemp = NoTopo;
            TipoItem item = NoTopo -> valor;
            NoTopo = NoTopo -> proximo;
            delete Notemp;
            return item;
        }
    }

    void pilhadinamica::imprimir() //print
    {
        No* notemp = NoTopo;
        cout << "pilha: [ ";
        while (notemp != NULL){
            cout << notemp -> valor << " ";
            notemp = notemp -> proximo;
        }
        cout << "]\n";
    }