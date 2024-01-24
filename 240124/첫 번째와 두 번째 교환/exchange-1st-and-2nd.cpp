#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i=2; i<s.length(); i++){
        if(s[i]==s[0]){
            s[i]=s[1];
        }
        else if(s[i]==s[1]){
            s[i]=s[0];
        }
    }
    char temp=s[0];
    s[0]=s[1];
    s[1]=temp;
    cout << s;
    return 0;
}