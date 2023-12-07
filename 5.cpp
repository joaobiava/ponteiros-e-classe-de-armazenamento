#include <iostream>

using namespace std;

int main(){
    int *p, *p2, y, x;
    cin >> x >> y;
    p = &x;
    p2 = &y;
    if(*p > *p2){
        cout << *p << " > " << *p2;
    }
    else{
        cout << *p << " < " << *p2;
    }
}