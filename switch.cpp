#include <iostream>

using namespace std;

int main() {
    int menu;
    cout << "1 - 3: Louis" << endl << "4 - 6: Luffy" << endl << "Escolha: ";
    cin >> menu;
    switch(menu) {
        case 1 ...3:
            cout << "Louis" << endl;
            break;
        case 4 ...6:
            cout << "Luffy" << endl;
            break;
        default:
            cout << "Quê?" << endl;
    }
}