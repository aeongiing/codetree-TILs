#include <iostream>
using namespace std;

int min(int a, int b, int c){
    int minimum=100;
    if(a<=minimum){
        minimum=a;
    }
    if(b<=minimum){
        minimum=b;
    }
    if(c<=minimum){
        minimum=c;
    }
    return minimum;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(a, b, c);
    return 0;
}