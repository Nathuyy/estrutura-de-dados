#include <iostream>
#include "pilhadinamica.cpp"
using namespace std;

int main(){
    pilhadinamica pilha1;
    TipoItem item; 
    int opcao;

    do
    {
        cout << "digite 0 para parar o programa\n";
        cout << "digite 1 para inserir um elemento\n";
        cout << "digite 2 para remover um elemento\n";
        cout << "digite 3 para imprimir a pilha\n";
        cin >> opcao;

        if (opcao == 1)
        {
            cout << "insira o elemento:";
            cin >> item;
            pilha1.push(item);
        } else if (opcao == 2)
        {
            pilha1.pop();
            cout << "removido";
        } else if (opcao == 3)
        {
            pilha1.print();
        } 
        
    } while (opcao != 0);
    
}