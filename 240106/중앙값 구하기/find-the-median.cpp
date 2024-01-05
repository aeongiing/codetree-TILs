#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a>=b && a>=c){
        if(c>=b)
            b=c;
    }
    else if(b>=a && b>=c){
        if(a>=c){
            b=a;
        }
        else
            b=c;
    }
    else{
        if(a>=b)
            b=a;
    }
    cout << b;
    return 0;
}