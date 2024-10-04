/* Problema 1011: Esfera */

#include <iostream>
#include <iomanip>

using namespace std;

#define PI (3.14159)

int main()
{
    double raio, volume;

    cin >> raio;
    volume  = raio*raio*raio*PI*(4.0/3);

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;
}