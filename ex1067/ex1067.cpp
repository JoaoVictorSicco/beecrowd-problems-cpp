/* Problema 1067: Números Ímpares */

#include <iostream>

using namespace std;

int main()
{
    int entrada, counter = 1;

    cin >> entrada;
    while(counter<=entrada)
    {
        cout << counter << endl;
        counter+=2;
    }
}