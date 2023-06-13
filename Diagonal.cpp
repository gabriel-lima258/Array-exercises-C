#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int diagonal(int matriz[4][4])
{
    int diagonal = 1;

    for (int i=0; i<4; i++)
    {
        diagonal *= matriz[i][i];
    }
    return diagonal;
}

int outDiagonal(int matriz[4][4])
{
    int soma = 0;

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (i != j)
            {
            soma += matriz[i][j];
            }
        }
    }
    return soma;
}

void mostrar(int matriz[4][4])
{
    for (int i=0; i<4; i++)
    {
        cout << "linha " << i+1;
        for (int j=0; j<4; j++)
        {
            cout << setw(5) << matriz[i][j];
        }
        cout << endl;
    }
}


int main()
{
    int matriz[4][4];

    cout << "Digite os valores da matriz." << endl;

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            cin >> matriz[i][j];
        }
    }

    cout << "\n";

    int valorDiagonal, valorSoma;

    mostrar(matriz);
    valorDiagonal = diagonal(matriz);
    valorSoma = outDiagonal(matriz);

    cout << "\nO valor do produto diagonal = "<< valorDiagonal << endl;
    cout << "O valor da soma dos elementos fora da diagonal = "<< valorSoma << endl;

    return 0;
}
