// pilha.cpp é onde vamos colocar oq cada função da classe faz

#include <iostream>
#include "pilha.h"

using namespace std;

    pilha::pilha()
    {
        //contruiu uma pilha, iniciando no tamanho zero e colocando o limite definido no max_itens

        tamanho = 0;
        estrutura = new TipoItem[max_itens];
    }

    pilha::~pilha()
    {
        delete [] estrutura;

    }


    bool pilha::estacheia()
    {
        return (tamanho == max_itens); // comparando o tamanho com o max_itens
    }

    bool pilha::estavazia()
    {
        return (tamanho == 0);
    }

    void pilha::push(TipoItem item)
    {
        if (estacheia())
        {
            cout << "a pilha está cheia";
            return;        
        } else {
            estrutura[tamanho] = item;
            tamanho++;
        }
        
    }

    TipoItem pilha::pop()
    {
        if (estavazia())
        {
            cout << "a pilha está vazia";
            return TipoItem{};

        } else {
            tamanho--;
            return estrutura[tamanho];
        }
        

    } 

    void pilha::print()
    {
        cout << "pilha: [ ";
        for (int i = 0; i < tamanho; i++)
        {
            cout << estrutura[i];
        }
        cout << "]\n";
        
    }

    int pilha::lenght()
    {
        return tamanho;
    }