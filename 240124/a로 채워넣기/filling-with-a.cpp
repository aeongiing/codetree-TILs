#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    s[1]=s[s.length()-2]='a';
    cout << s;
    return 0;
}