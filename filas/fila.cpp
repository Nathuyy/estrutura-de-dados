#include "fila.h"
#include <iostream>

using namespace std;

fila::fila()
{
    primeiro = 0;
    ultimo = 0;
    estrutura = new TipoItem[max_itens];
}

fila::~fila()
{
    delete[] estrutura;
}

bool fila::estacheia()
{
    return (ultimo - primeiro == max_itens);
}

bool fila::estavazia()
{
    return (primeiro == ultimo);
}

void fila::enqueue(TipoItem item)
{
    if (estacheia())
    {
        cout << "Erro: a fila está cheia.\n";
    }
    else
    {
        estrutura[ultimo % max_itens] = item;
        ultimo++;
    }
}

TipoItem fila::dequeue()
{
    if (estavazia())
    {
        cout << "Erro: a fila está vazia.\n";
        return TipoItem{}; 
    }
    else
    {
        TipoItem itemRemovido = estrutura[primeiro % max_itens];
        primeiro++;
        return itemRemovido;
    }
}

void fila::imprimir()
{
    cout << "Fila: ";
    for (int i = primeiro; i < ultimo; i++)
    {
        cout << estrutura[i % max_itens] << " ";
    }
    cout << "\n";
}
