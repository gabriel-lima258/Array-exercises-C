#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    int numeros [5],
        quadrado [5],
        cubo [5],
        soma [5],
        total;

    cout<< "Digite 5 numeros: \n";

    for (int i=0; i<5; i++)
    {
        cin>> numeros[i];
        numeros[i] = i;
        quadrado[i] = i * i;
        cubo[i] = i * i * i;
        soma[i] = numeros[i] + quadrado[i] + cubo[i];
        total += soma[i];
    }

    cout << "SAIDA\n";

    cout << "numeros:";

    for(int i=0; i<5; i++)
    {
        cout<< setw(5) <<numeros[i];
    }

    cout << endl;

    cout << "quadrados:";

    for(int i=0; i<5; i++)
    {
        cout<< setw(5) <<quadrado[i];
    }

    cout << endl;

    cout << "cubo:";

    for(int i=0; i<5; i++)
    {
        cout<< setw(5) <<cubo[i];
    }

    cout << endl;

    cout << "soma:";

    for(int i=0; i<5; i++)
    {
        cout<< setw(5) <<soma[i];
    }

    cout << endl;

    cout << "Total geral: " << total;

    return 0;
}





