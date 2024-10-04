/* Problema 1005: Média 1 */

#include <iostream>
#include <iomanip>

#define PESO_A (3.5)
#define PESO_B (7.5)

using namespace std;

int main()
{
    double nota1, nota2, media;
    cin >> nota1;
    cin >> nota2;

    media = (PESO_A*nota1 + PESO_B*nota2)/(PESO_A + PESO_B);
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << endl;

}