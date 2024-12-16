// fila = queue
typedef int TipoItem;
const int max_itens = 100;

class fila
{
private:
    int primeiro, ultimo;
    TipoItem* estrutura;

public:
    fila();
    ~fila();
    bool estavazia();
    bool estacheia();
    void enqueue(TipoItem item); //inserir
    TipoItem dequeue(); // remover
    void imprimir();
};

