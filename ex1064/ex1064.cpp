/* Problema 1064: Positivos e média */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float entrada, media, soma;
    int positivos = 0, counter = 0;

    while (counter<6)
    {
        cin >> entrada;
        if(entrada>0)
        {
            soma = soma + entrada;
            positivos++;
        }
        counter++;
    }

    media = soma/positivos;
    cout << positivos << " valores positivos\n";
    cout << fixed << setprecision(1);
    cout << media << endl;

}