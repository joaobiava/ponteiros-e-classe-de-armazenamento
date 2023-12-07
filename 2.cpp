#include <iostream>

using namespace std;

int main(){
    int *p, y;
    const int x = 10;
    cin >> y;
    p = &y;
    cout << *p << endl;
    *p += x;
    cout << *p << endl;
}