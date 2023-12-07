#include <iostream>

using namespace std;

int main(){
    int *p, n;
    cin >> n;
    int v[n];
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=0; i<n; i++){
        p = &v[i];
        cout << *p << " ";
    }
}