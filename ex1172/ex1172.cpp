/* Problema 1172: Substituição em vetor I */

#include <iostream>

using namespace std;

#define TAMANHO (10)

int main()
{
    int vetor[TAMANHO];
    int entrada;
    for(int i=0; i<TAMANHO; i++)
    {
        cin >> entrada;
        vetor[i] = entrada;
        if(entrada <=0)
        {
            vetor[i] = 1;
        }
        // cout << vetor[i] << endl;
    }
    for(int i=0; i<TAMANHO; i++)
    {
        cout << "X[" << i << "] = " << vetor[i] << endl;
    }

}