#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    string nome = "";
    float p1, p2, media;

    cout << "Digite o nome do aluno\n";
    cin >> nome;
    cout << "Digite a nota da P1\n";
    cin >> p1;
    if (p1 < 0 || p1 > 10) {
        cout << "Nota incompatível, reinicie o programa\n";
        return 0;
    }
    cout << "Digite a nota da P2\n";
    cin >> p2;
    if (p2 < 0 || p2 > 10) {
        cout << "Nota incompatível, reinicie o programa\n";
        return 0;
    }

    media = (p1 + p2) / 2;

    cout << "A média de " << nome << " é " << media << endl;
    if (media >= 6) {
        cout << nome << " está APROVADO\n";
    }
    else {
        cout << nome << " está REPROVADO\n";
    }
}