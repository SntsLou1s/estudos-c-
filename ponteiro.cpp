#include <iostream>

using namespace std;

int main() {
    string nome = "Luis";
    string * ponteiro = &nome;
    cout << nome << endl << ponteiro << endl << * ponteiro << endl;
    * ponteiro = "Louis";
    cout << nome << endl << ponteiro << endl << * ponteiro << endl;
}