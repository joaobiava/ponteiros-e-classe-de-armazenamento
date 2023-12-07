#include <iostream>

using namespace std;

int main(){
    int *p, *p2, y, x;
    cin >> y >> x;
    p = &y;
    p2 = &x;
    x = *p - *p2;
    cout << x << endl;
}