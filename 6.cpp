#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; ++i) {
        static int variavelEstatica = 0;
        variavelEstatica++;
        cout << variavelEstatica << endl;
    }
}