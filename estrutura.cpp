#include <iostream>
#include <stdlib.h>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main() {
    Pessoa pessoas[5];
    for(int x = 0; x < 5; x += 1) {
        cout << "Nome: ";
        cin >> pessoas[x].nome;
        cout << "Idade: ";
        cin >> pessoas[x].idade;
        cout << "Altura: ";
        cin >> pessoas[x].altura;
        system("clear");
    }
    for(int x = 0; x < 5; x += 1) {
        cout << "Nome: " << pessoas[x].nome << endl;
        cout << "Idade: " << pessoas[x].idade << endl;
        cout << "Altura: " << pessoas[x].altura << endl;
        cout << endl;
    }
}