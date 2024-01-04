#include <iostream>
using namespace std;

int main() {
    char c;
    double a, b;
    cin >> c >> a >> b;
    cout << c<<endl;
    cout.precision(2);
    cout<<fixed<<a<<endl<<b;
    return 0;
}