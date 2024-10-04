/* Problema 1038: Lanche */

#include <iostream>
#include <iomanip>

using namespace std;

#define PRECO_CACHORRO_QUENTE (4.00)
#define PRECO_X_SALADA        (4.50)
#define PRECO_X_BACON         (5.00)
#define PRECO_TORRADA_SIMPLES (2.00)
#define PRECO_REFRIGERANTE    (1.50)

class dados
{
    public:
    int codigo_item;
    int quantidade_item;
};

int main()
{
    dados item;
    double total;

    cin >> item.codigo_item >> item.quantidade_item;

    cout << fixed << setprecision(2);

    if(item.codigo_item == 1)
    {
        total = item.quantidade_item*PRECO_CACHORRO_QUENTE;
        cout << "Total: R$ " << total << endl;
    }
    else if(item.codigo_item == 2)
    {
        total = item.quantidade_item*PRECO_X_SALADA;
        cout << "Total: R$ " << total << endl;
    }
    else if(item.codigo_item == 3)
    {
        total = item.quantidade_item*PRECO_X_BACON;
        cout << "Total: R$ " << total << endl;
    }
    else if(item.codigo_item == 4)
    {
        total = item.quantidade_item*PRECO_TORRADA_SIMPLES;
        cout << "Total: R$ " << total << endl;
    }
    else if(item.codigo_item == 5)
    {
        total = item.quantidade_item*PRECO_REFRIGERANTE;
        cout << "Total: R$ " << total << endl;
    }

}