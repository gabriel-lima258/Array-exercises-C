#include <iostream>
#include <string>

using namespace std;

string paises() {

string paises_vogais;

    for (int i = 0; i < 5; i++) {
        string pais;
        cout << "Digite o nome de um país: ";
        cin >> pais;

        char primeira_letra = tolower(pais[0]); // Converte a primeira letra para minúscula

        if (primeira_letra == 'a' || primeira_letra == 'e' || primeira_letra == 'i' ||
            primeira_letra == 'o' || primeira_letra == 'u') {
            paises_vogais += pais + "\n";
        }
    }
    return paises_vogais;
}

int main() {
    string nomes_paises_vogais = paises();

    cout << "\nPaíses que começam com vogal:\n";
    cout << nomes_paises_vogais;

    return 0;
}
