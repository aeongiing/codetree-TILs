#include <iostream>
#include <string>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    cout << (int)a+(int)b << " " << (int)(a > b ? a-b : b-a);
    return 0;
}