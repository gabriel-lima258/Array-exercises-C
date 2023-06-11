#include <iostream>
#include <cstring>

using namespace std;

int conta_char(char caracter, char matriz[][100])
{
    int contador = 0;
    int linha = 0;

    while(matriz[linha][0] != '\0') {
        int coluna = 0;

        while(matriz[linha][coluna] != '\0'){
            if(matriz[linha][coluna] == caracter){
               contador ++;
            }

            coluna++;
        }

        linha++;
    }

    return contador;
}


int main() {

   char caracter;
   char matriz[100][100];

   while (true) {
    cout << "Digite um caracter para inicializar (ou aperte # para finalizar!): " << endl;
    cin >> caracter;

    if (caracter == '#')
    {
        break;
    }

    cout << "Digite os elementos da matriz (ou aperte # para finalizar!): " << endl;

    int linha = 0;
    while (true) {
        cin >> matriz[linha];

        if (matriz[linha][0] == '#'){
            break;
        }

        linha++;
    }

    int contador = conta_char(caracter, matriz);

    cout << "O caracter '" << caracter << "' aparece " << contador << " vezes dentro da matriz." << endl;
   }

    return 0;
}
