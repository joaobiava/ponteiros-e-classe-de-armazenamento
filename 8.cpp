#include <iostream>

using namespace std;

void funcaoIncrementa() {
    register int variavelDeRegistro = 0;
    variavelDeRegistro++;
    cout << "Valor da variavel de registro: " << variavelDeRegistro << endl;
}

int main() {
    for (int i = 0; i < 5; ++i) {
        funcaoIncrementa();
    }
}