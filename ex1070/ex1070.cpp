/* Problema 1070: Seis números ímpares */

#include <iostream>

using namespace std;

int main()
{
    int entrada, counter = 0;
    cin >> entrada;
    while(counter<6)
    {
        if(entrada%2!=0)
        {
            cout << entrada << endl;
            counter+=1;
        }
        entrada+=1;
    }
}