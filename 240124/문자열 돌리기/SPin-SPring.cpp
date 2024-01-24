#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int L=s.length();
    while(L--){
        cout << s << endl;
        s=s.substr(s.length()-1, 1)+s.substr(0, s.length()-1);
    }
    cout << s;
    return 0;
}