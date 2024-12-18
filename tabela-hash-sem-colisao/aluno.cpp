#include "aluno.h";
    
    aluno::aluno(){
        ra = -1;
        nome = " ";
    }

    aluno::aluno(int r, string n){
        ra = r;
        nome = n;
    }

    int aluno::obterRA(){
        return ra;
    }
    string aluno::obterNome(){
        return nome;
    }   