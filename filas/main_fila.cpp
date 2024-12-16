#include <iostream>
#include "fila.h"

using namespace std;

int main()
{
    fila fila1;
    TipoItem item;
    int opcao;

    do
    {
        cout << "\nEscolha uma opção:\n";
        cout << "1 - Inserir um elemento (enqueue)\n";
        cout << "2 - Remover um elemento (dequeue)\n";
        cout << "3 - Imprimir a fila\n";
        cout << "0 - Sair\n";
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Digite o elemento a ser inserido: ";
            cin >> item;
            fila1.enqueue(item);
            break;

        case 2:
            item = fila1.dequeue();
            if (!fila1.estavazia()) // Evita imprimir se a fila estiver vazia
            {
                cout << "Elemento removido: " << item << "\n";
            }
            break;

        case 3:
            fila1.imprimir();
            break;

        case 0:
            cout << "Encerrando o programa.\n";
            break;

        default:
            cout << "Opção inválida! Tente novamente.\n";
        }
    } while (opcao != 0);

    return 0;
}
