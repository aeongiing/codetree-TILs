#include <iostream>
#include <string>

using namespace std;

bool IsExist(int n){
    string s=to_string(n);
    for(int j=0; j<s.length(); j++){
        if(s[j]=='3' || s[j]=='6' || s[j]=='9'){
            return true;
        }
    }
    return false;
}

bool IsMagicNumber(int n){
    return IsExist(n) || n%3==0;
}

int main() {
    int a, b;
    cin >> a >> b;
    int cnt=0;
    for(int i=a; i<=b; i++){
        if(IsMagicNumber(i)){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}