/* Problema 1059: Número Pares */

#include <iostream>

using namespace std;
int main()
{
    int counter=2;
    while(counter <= 100)
    {
        if(counter%2==0)
        {
            cout << counter << endl;
        }
        counter++;
    }
}