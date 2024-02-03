#include <iostream>
using namespace std;

bool IsAllDifferent(string s){
    for(int i=0; i<s.length(); i++){
        for(int j=s.length()-1; j>i; j--){
            if(s[i]!=s[j]){
                return true;
            }
        }
    }
    return false;
}

int main() {
    string a;
    cin >> a;
    if(IsAllDifferent(a)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}