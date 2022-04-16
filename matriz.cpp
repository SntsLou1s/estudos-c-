#include <iostream>

using namespace std;

int main() {
    int matriz[3][3];
    for(int x = 0; x < 3; x += 1) {
        for(int y = 0; y < 3; y += 1) {
            cin >> matriz[x][y];
        }
    }
    for(int x = 0; x < 3; x += 1) {
        for(int y = 0; y < 3; y += 1) {
            cout << matriz[x][y] << " ";
        }
        cout << endl;
    }
}