/* Problema 1073: Quadrado de Pares */

#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int entrada;
    cin >> entrada;

    while(counter<entrada)
    {
        if(entrada%2==0)
        {
            counter+=2;
            cout << counter << "^2" << " = " << counter*counter << endl;
        }
    }
}