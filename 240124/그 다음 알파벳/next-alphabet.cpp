#include <iostream>
#include <string>
using namespace std;

int main() {
    char c;
    cin >> c;
    if(c=='z'){
        cout << 'a';
    }
    else{
        cout << (char)(c+1);
    }
    return 0;
}