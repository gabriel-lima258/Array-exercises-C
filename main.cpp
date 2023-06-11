#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 100;

void separarElementos(int matriz[][MAX], int m, int n, int pos1[], int pos2[], int& tamanho1, int& tamanho2)
{
    tamanho1 = 0;
    tamanho2 = 0;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            int elemento = matriz[i][j];

            if ((i+j) % 2 == 0) {
                pos1[tamanho1] = elemento;
                tamanho1++;
            } else {
                pos2[tamanho2] = elemento;
                tamanho2++;
            }
        }
    }
}

int main() {

    int m, n;

    cout << "Digite o número de linhas da matriz: ";
    cin >> m;
    cout << "Digite o número de colunas da matriz: ";
    cin >> n;

    int matriz[MAX][MAX];

    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Digite o elemento da posicao [" << i << ", " << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int pos1[MAX], pos2[MAX];
    int tamanho1, tamanho2;

    separarElementos(matriz, m, n, pos1, pos2, tamanho1, tamanho2);

    cout << "Elementos nas posições pares:" << endl;
    for (int i = 0; i < tamanho1; i++){
        cout << "Posição: " << i << ", Valor: " << pos1[i] << endl;
    }

    cout << "Elementos nas posições impares:" << endl;
    for (int j = 0; j < tamanho2; j++){
        cout << "Posição: " << j << ", Valor: " << pos2[j] << endl;
    }

    return 0;
}
