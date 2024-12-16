// pilha.h é onde vamos definir a classe
// pilha = stack

typedef int TipoItem;
const int max_itens = 100;

class pilha{
    private:
    int tamanho;
    TipoItem* estrutura;

    public:
    pilha(); //construtora
    ~pilha(); //destrutora 
    bool estacheia(); 
    bool estavazia();
    void push(TipoItem item); //inserir
    TipoItem pop(); //remover
    void print();
    int lenght();

};