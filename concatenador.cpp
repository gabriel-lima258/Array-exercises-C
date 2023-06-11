#include <iostream>
#include <cstring>

using namespace std;

class Concatenador
{
public:
    void concatenar()
    {
        char primeiroNome[100];
        char ultimoNome[100];
        char nomeCompleto[200];

        cout << "Digite o primeiro nome: ";
        cin.getline(primeiroNome, 100);

        cout << "Digite o ultimo nome: ";
        cin.getline(ultimoNome, 100);

        strcpy(nomeCompleto, primeiroNome);
        strcat(nomeCompleto, " ");
        strcat(nomeCompleto, ultimoNome);

        cout << "Nome completo : " << nomeCompleto << endl;
    }
};


int main() {

    Concatenador concatenador;

    char resposta;

    do {
        concatenador.concatenar();

        cout << "Deseja continuar? (s/n)" << endl;
        cin >> resposta;
        cin.ignore(); // limpar buffer

    } while (resposta == 's' || resposta == 'S');

    return 0;
}
