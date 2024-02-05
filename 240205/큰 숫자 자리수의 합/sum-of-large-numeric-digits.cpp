#include <iostream>
using namespace std;

int F(int n){
    if(n/10==0){
        return n;
    }
    return F(n/10)+n%10;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int n=a*b*c;
    cout << F(n);
    return 0;
}