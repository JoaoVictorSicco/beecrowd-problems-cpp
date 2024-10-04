/* Problema 1010: Cálculo Simples */

#include <iostream>
#include <iomanip>

using namespace std;

class dados_peca
{
    public:
    int codigo_peca;
    int numero_peca;
    double valor_peca; 
};

int main()
{
    double total;

    dados_peca peca1;
    dados_peca peca2;

    cin >> peca1.codigo_peca >> peca1.numero_peca >> peca1.valor_peca;
    cin >> peca2.codigo_peca >> peca2.numero_peca >> peca2.valor_peca;

    total = peca1.numero_peca*peca1.valor_peca + peca2.numero_peca*peca2.valor_peca;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

}