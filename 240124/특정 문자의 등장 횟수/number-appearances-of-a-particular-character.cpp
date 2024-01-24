#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt1=0, cnt2=0;
    for(int i=0; i<s.length()-1; i++){
        if(s[i]=='e' && s[i+1]=='e'){
            cnt1++;
        }
        if(s[i]=='e' && s[i+1]=='b'){
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}