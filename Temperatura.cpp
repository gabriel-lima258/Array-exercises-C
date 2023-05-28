#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const int Periodo = 3;
const int Dia = 7;
const int Semana = 4;

double maxTemperatura(double temperatura[Periodo][Dia][Semana])
{
   double findMaxTemperature = temperatura[0][0][0];

   for(int i=0; i<Periodo; i++)
    {
        for(int j=0; j<Dia; j++)
        {
            for(int k=0; k<Semana; k++)
            {
                if (temperatura[i][j][k] > findMaxTemperature)
                {
                    findMaxTemperature = temperatura[i][j][k];
                }
            }
        }
    }

    return findMaxTemperature;
}

double minTemperatura(double temperatura[Periodo][Dia][Semana])
{
   double findMinTemperature = temperatura[0][0][0];

   for(int i=0; i<Periodo; i++)
    {
        for(int j=0; j<Dia; j++)
        {
            for(int k=0; k<Semana; k++)
            {
                if (temperatura[i][j][k] < findMinTemperature)
                {
                    findMinTemperature = temperatura[i][j][k];
                }
            }
        }
    }

    return findMinTemperature;
}

double calcularMedia(double temperatura[Periodo][Dia][Semana])
{
    double soma = 0;
    int contador = 0;

    for(int i=0; i<Periodo; i++)
    {
        for(int j=0; j<Dia; j++)
        {
            for(int k=0; k<Semana; k++)
            {
                soma += temperatura[i][j][k];
                contador++;
            }
        }
    }

    return soma/contador;
}

int main()
{
    double temperatura[Periodo][Dia][Semana];

    cout << "Digite as temperaturas: " << endl;
    for(int i=0; i<Periodo; i++)
    {
        for(int j=0; j<Dia; j++)
        {
            for(int k=0; k<Semana; k++)
            {
                cout << "Temperatura do periodo " << i+1 << ", dia " << j+1 << ", semana " << k+1 << endl;
                cin >> temperatura[i][j][k];
            }
        }
    }

    double maxTemperature = maxTemperatura(temperatura);
    double minTemperature = minTemperatura(temperatura);
    double mediaTemperature = calcularMedia(temperatura);

    cout << "Temperatura máxima do mês: " << maxTemperature << endl;
    cout << "Temperatura mínima do mês: " << minTemperature << endl;
    cout << "Temperatura média do mês: " << mediaTemperature << endl;

    return 0;
}





