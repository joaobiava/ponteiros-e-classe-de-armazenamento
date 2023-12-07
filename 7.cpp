#include <iostream>

using namespace std;

int n;
extern int troca_val();

int main(){
    n = 1;
    cout << "Main: " << n << endl;
    troca_val();
    cout << "Main de novo: " << n << endl;
}