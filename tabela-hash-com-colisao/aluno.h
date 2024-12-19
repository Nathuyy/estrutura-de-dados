#include <iostream>
using namespace std;

class aluno
{
private:
    int ra;
    string nome;
public:
    aluno();
    aluno(int r, string n);
    int obterRA();
    string obterNome();
};

