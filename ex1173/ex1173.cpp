/* Problema 1173 - Preenchimento do vetor I */

#include <iostream>

using namespace std;

#define TAMANHO (10)

int main()
{
    int vetor[TAMANHO];
    int entrada;
    
    cin >> entrada;
    vetor[0] = entrada;
    for(int i=1; i<TAMANHO; i++)
    {
        vetor[i] = 2*vetor[i-1];
    }

    for(int i=0; i<TAMANHO; i++)
    {
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }
}