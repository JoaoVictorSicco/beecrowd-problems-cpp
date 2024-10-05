/* Problema 1065: Pares entre cinco números */

#include <iostream>

using namespace std;

int main()
{
    int npares = 0, counter = 0;
    int entrada;

    while (counter<5)
    {
        cin >> entrada;
        if(entrada%2==0)
        {
            npares++;
        }
        counter++;
    }

    cout << npares << " valores pares\n";
    
}