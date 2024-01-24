#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i=2; i<s.length(); i++){
        if(s[i]==s[1]){
            s[i]=s[0];
        }
    }
    s[1]=s[0];
    cout << s;
    return 0;
}