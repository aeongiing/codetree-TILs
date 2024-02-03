#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(string s){
    for(int i=0; i<s.length(); i++){
        if(s[s.length()-i-1]!=s[i]){
            return false;
        }
    }
    return true;
}

int main() {
    string a;
    cin >> a;
    if(IsPalindrome(a)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}