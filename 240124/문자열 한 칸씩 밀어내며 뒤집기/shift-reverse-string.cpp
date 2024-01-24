#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;
    while(q--){
        int quest;
        cin >> quest;
        if(quest==1){
            s=s.substr(1, s.length()-1)+s.substr(0, 1);
            cout << s << endl;
        }
        else if(quest==2){
            s=s.substr(s.length()-1, 1)+s.substr(0, s.length()-1);
            cout << s << endl;
        }
        else if(quest==3){
            for(int i=0; i<s.length(); i++){
                cout << s[s.length()-i-1];
            }
            cout << endl;
        }
    }
    return 0;
}