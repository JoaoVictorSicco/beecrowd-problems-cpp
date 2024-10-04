/* Problema 1018: Cédulas */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int valor,n100,n50,n20,n10,n5,n2,n1;

    cin >> valor;

    n100 = valor/100;
    n50 = (valor%100)/50;
    n20 = ((valor%100)%50)/20;
    n10 = (((valor%100)%50)%20)/10;
    n5 = ((((valor%100)%50)%20)%10)/5;
    n2 = (((((valor%100)%50)%20)%10)%5)/2;
    n1 = ((((((valor%100)%50)%20)%10)%5)%2)/1;

    cout << valor << endl;
    cout << n100 << " nota(s) de R$ 100,00\n";
    cout << n50 << " nota(s) de R$ 50,00\n";
    cout << n20 << " nota(s) de R$ 20,00\n";
    cout << n10 << " nota(s) de R$ 10,00\n";
    cout << n5 << " nota(s) de R$ 5,00\n";
    cout << n2 << " nota(s) de R$ 2,00\n";
    cout << n1 << " nota(s) de R$ 1,00\n";
}