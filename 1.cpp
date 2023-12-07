#include <iostream>

using namespace std;

int main(){
    int *p, x;
    cin >> x;
    p = &x;
    cout << p << endl;
    p++;
    cout << p << endl;
    p--;
    cout << p << endl;
}