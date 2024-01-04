#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int m=13;
    double g=0.165;
    cout.precision(6);
    cout<<m << " * "<<g << " = "<<m*g;
    return 0;
}