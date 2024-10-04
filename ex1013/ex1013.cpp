/* Problema 1013: O maior */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c,maior_ab;

    cin >> a >> b >> c;
    maior_ab = (a+b+abs(a-b))/2;

    if(maior_ab>c)
    {
        cout << maior_ab << " eh o maior\n";
    }

    else
    {
        cout << c << " eh o maior\n";
    }
}