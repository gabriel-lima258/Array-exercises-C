#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void maximo(int matriz[2][4], int& maximo)
{
    maximo = matriz[0][0];

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<4; j++)
        {
            if(matriz[i][j] > maximo)
            {
                maximo = matriz[i][j];
            }
        }
    }
}

void minimo(int matriz[2][4], int& minimo)
{
    minimo = matriz[0][0];

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<4; j++)
        {
            if(matriz[i][j] < minimo)
            {
                minimo = matriz[i][j];
            }
        }
    }
}


int main()
{
    int matriz[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int valorMaximo, valorMinimo;

    maximo(matriz, valorMaximo);
    minimo(matriz, valorMinimo);

    cout << "O numero maximo = "<< valorMaximo << endl;
    cout << "O numero minimo = "<< valorMinimo << endl;

    return 0;
}
