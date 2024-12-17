
#include <iostream>
#include "pilhadinamica.h"
#include <cstddef>

using namespace std;

    pilhadinamica::pilhadinamica()
    {
        NoTopo = NULL; //tem o ponteiro mas ele não tem elemento
    }

    pilhadinamica::~pilhadinamica()
    {
        Node* NoTemp;
        while (NoTopo != NULL)
        {
           NoTemp = NoTopo;
           NoTopo = NoTopo->proximo;
           delete NoTemp;
        }
    }


    bool pilhadinamica::estacheia()
    {
        Node* NoNovo;
        try{
            NoNovo = new Node;
            delete NoNovo;
            return false;
        }catch(bad_alloc exception){
            return true;
        }
    }

    bool pilhadinamica::estavazia()
    {
        return (NoTopo == NULL);
    }

    void pilhadinamica::push(TipoItem item)
    {
        if (estacheia())
        {
            cout << "a pilhadinamica está cheia";
            return;        
        } else {
            Node NoNovo = new Node;
            NoNovo->valor = item;
            NoNovo->proximo = NoTopo;
            NoTopo = NoNovo;
        }
    }

    TipoItem pilhadinamica::pop()
    {
        if (estavazia())
        {
            cout << "a pilhadinamica está vazia";
            return TipoItem{};

        } else {
            Node* NoTemp;
            NoTemp = NoTopo;
            TipoItem item = NoTopo->valor;
            NoTopo = NoTopo->proximo;
            delete NoTemp;
            return item;
        }
    } 

    void pilhadinamica::print()
    {
        Node* NoTemp = NoTopo;
        while (NoTemp != NULL)
        {
            cout << NoTemp->valor << " ";
            NoTemp = NoTemp->proximo;
        }
        cout << endl;
    }

