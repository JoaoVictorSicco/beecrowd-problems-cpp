/* Problema 1009: Salário com bônus */

#include <iostream>
#include <iomanip>

using namespace std;

#define COMISSAO (0.15)

class vendedor
{
    public:
    char nome[20];
    double salario_fixo;
    double vendas_no_mes;
};


int main()
{
    double total;

    vendedor vendedor;
    cin >> vendedor.nome;
    cin >> vendedor.salario_fixo;
    cin >> vendedor.vendas_no_mes;

    total = vendedor.salario_fixo + vendedor.vendas_no_mes*COMISSAO;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;

}