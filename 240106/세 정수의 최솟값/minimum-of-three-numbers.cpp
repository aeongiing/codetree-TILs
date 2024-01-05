#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b || a==c || a==b==c){
        cout << a;
    }
    else if(b==c){
        cout << b;
    }
    if(a<b && a<c){
        cout << a;
    }
    if(b<a && b<c){
        cout << b;
    }
    if(c<a && c<a){
        cout << c;
    }
    return 0;
}