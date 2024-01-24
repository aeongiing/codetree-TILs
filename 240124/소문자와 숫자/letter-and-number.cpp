#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
        }
        if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9'){
            cout << s[i];
        }
    }
    return 0;
}