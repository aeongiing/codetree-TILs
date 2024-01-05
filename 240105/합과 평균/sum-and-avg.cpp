#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout<<fixed<<a+b;
    cout.precision(1);
    cout<<" "<<(double)(a+b)/2;
    return 0;
}