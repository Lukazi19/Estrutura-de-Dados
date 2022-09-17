#include <iostream>
using namespace std;

class aluno{
    private:
    int ra;
    std::string nome;



    public:
    aluno();
    aluno(int r, std::string n);
    string obterNome();
    int obterRa();


};