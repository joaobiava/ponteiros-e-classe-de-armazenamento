#include <iostream>

using namespace std;

int main(){
    int *p, *p2, x, y;
    cin >> x >> y;
    p = &x;
    p2 = &y;
    if(p>p2){
        cout << p << " = " << x << " > " << p2 << " = " << y;
    }
    else{
        cout << p << " = " << x << " < " << p2 << " = " << y;
    }
}