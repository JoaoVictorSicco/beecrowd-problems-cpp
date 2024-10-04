/* Problema 1002: Área do círculo */

#include <iostream>
#include <iomanip>

using namespace std;

#define PI (3.14159)

int main()
{
    double raio, area;

    cin >> raio;
    area = PI*raio*raio;

    cout << fixed << setprecision(4); // Utiliza-se esse comando para formatar casas decimais
    cout << "A=" << area << endl;

}