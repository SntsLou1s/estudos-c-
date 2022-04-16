#include <iostream>

using namespace std;

int checar_maior_idade(int vetor[10]) {
    int maior_idade = 0;
    for(int x = 0; x < 10; x += 1) {
        if(vetor[x] > maior_idade) {
            maior_idade = vetor[x];
        }
    }
    return maior_idade;
}

int checar_menor_idade(int vetor[10]) {
    int menor_idade = 9999;
    for(int x = 0; x < 10; x += 1) {
        if(vetor[x] < menor_idade) {
            menor_idade = vetor[x];
        }
    }
    return menor_idade;
}

int main() {
    int idades[10], maior_idade, menor_idade;
    for(int x = 0; x < 10; x += 1) {
        cout << "Informe a idade " << x + 1 << ": ";
        cin >> idades[x];
    }
    maior_idade = checar_maior_idade(idades);
    cout << "Maior idade: " << maior_idade << endl;
    menor_idade = checar_menor_idade(idades);
    cout << "Menor idade: " << menor_idade << endl;
}