#include <iostream>

using namespace std;

extern int n;

int troca_val(){
    n = 10;
    cout << "Troca: " << n << endl;
}