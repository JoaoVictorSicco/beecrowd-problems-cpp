/* Problema 1008: Salário */

#include <iostream>
#include <iomanip>

using namespace std;

class funcionario
{
    public:

    int numero_funcionario;
    int horas_trabalhadas;
    double salario_hora;
};

int main()
{
    double salario;

    funcionario funcionario;

    cin >> funcionario.numero_funcionario;
    cin >> funcionario.horas_trabalhadas;
    cin >> funcionario.salario_hora;

    salario = funcionario.horas_trabalhadas*funcionario.salario_hora;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << funcionario.numero_funcionario << endl;
    cout << "SALARY = U$ " << salario << endl;

}