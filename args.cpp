#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "O programa tem " << argc << " parâmetro(s)" << endl;
    for(int x = 0; x < argc; x += 1) {
        cout << x + 1 << ": " << argv[x] << endl;
    }
} 