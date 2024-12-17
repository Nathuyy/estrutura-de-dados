// dynamic stack

typedef int TipoItem;

class pilhadinamica

struct Node //nó
{
    TipoItem valor;
    Node* proximo; //ponteiro
};

class pilhadinamica {
    private:
    Node* NoTopo; //ponteiro para o nó q ta no topo

    public:
        pilhadinamica();
        ~pilhadinamica();
        bool estacheia(); 
        bool estavazia();
        void push(TipoItem item); //inserir
        TipoItem pop(); //remover
        void print();
};

