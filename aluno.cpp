#include "aluno.h"
using namespace std;

    aluno::aluno()
    {
        ra = -1;
        nome = " ";
    }

    aluno::aluno(int r, std::string n)
    {
        ra = r;
        nome = n;
    }   
    string aluno::obterNome()
    {
        return nome;
    }
    int aluno::obterRa()
    {
        return ra;
    }