/* Problema 1066: Pares, Ímpares, Positivos e Negativos */

#include <iostream>

using namespace std;

int main()
{
    int entrada, pares_counter = 0, impares_counter = 0, counter = 0, positivos = 0, negativos = 0;

    while(counter<5)
    {
        cin >> entrada;
        if(entrada%2==0)
        {
            pares_counter++;
        }
        if(entrada%2!=0)
        {
            impares_counter++;
        }
        if(entrada>0)
        {
            positivos++;
        }
        if(entrada<0)
        {
            negativos++;
        }
        counter++;
    }

    cout << pares_counter << " valor(es) par(es)\n";
    cout << impares_counter << " valor(es) impar(es)\n";
    cout << positivos << " valor(es) positivo(s)\n";
    cout << negativos << " valor(es) negativo(s)\n";
}