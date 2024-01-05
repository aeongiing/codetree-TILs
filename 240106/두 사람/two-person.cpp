#include <iostream>
using namespace std;

int main() {
    int a_a, b_a;
    char a_x, b_x;
    cin >> a_a >> a_x;
    cin >> b_a >> b_x;

    cout <<(a_a>=19&&a_x=='M' || b_a>=19&&b_x=='M');
    return 0;
}