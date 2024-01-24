#include <iostream>
#include <string>
using namespace std;
//s = s.substr(len - 1, 1) + s.substr(0, len - 1);
int main() {
    string s;
    cin >> s;
    s=s.substr(1, s.length()-1) + s.substr(0, 1);
    cout << s;
    return 0;
}