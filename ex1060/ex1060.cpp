/* Problema 1060: Número Positivos */

#include <iostream>

using namespace std;

int main()
{
    float valor;
    int counter = 0, positivos = 0;
    while(counter<6)
    {
        cin >> valor;
        if(valor>0)
        {
            positivos++;
        }
        counter++;
    }

    cout << positivos << " valores positivos\n";
}