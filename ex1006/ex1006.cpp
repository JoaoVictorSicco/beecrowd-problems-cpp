/* Problema 1006: Média 2 */

#include <iostream>
#include <iomanip>

using namespace std;

#define PESO_A (2)
#define PESO_B (3)
#define PESO_C (5)

int main()
{
    double a,b,c,media;

    cin >> a;
    cin >> b;
    cin >> c;

    media = (PESO_A*a + PESO_B*b + PESO_C*c)/(PESO_A + PESO_B + PESO_C);
    cout << fixed << setprecision(1);

    cout << "MEDIA = " << media << endl;
}