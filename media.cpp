#include <iostream>
#include <stdlib.h>

using namespace std;

float calcular_media(float n1, float n2) {
	float soma = (n1 + n2) / 2;
	return soma;
}

void verificar_aprovacao(float md) {
	if(md >= 6) {
		cout << "Você foi aprovado" << endl;
	}
	else {
		cout << "Você foi reprovado" << endl;
	}
}

int main() {
	float nota1, nota2, media;
	char resposta;
	start:
	cout << ">>> insira a nota 1: ";
	cin >> nota1;
	cout << ">>> insira a nota 2: ";
	cin >> nota2;
	media = calcular_media(nota1, nota2);
	cout << "Sua média é " << media << endl;
	verificar_aprovacao(media);
	cout << endl << "Deseja verificar outra nota?\n>>> ";
	cin >> resposta;
	if(resposta == 's' || resposta == 'S') {
		system("clear");
		goto start;
	}
	return 0;
}