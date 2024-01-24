#include <iostream>
#include <string>
using namespace std;
//s = s.substr(0, 2) + s.substr(3);
//s.erase(2, 1);
int main() {
    string s;
    cin >> s;
    s.erase(1, 1);
    s.erase(s.length()-2, 1);
    cout << s;
    return 0;
}