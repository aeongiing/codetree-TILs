#include <iostream>
#include <string>
using namespace std;
//find("ab") != string::npos
//start_idx = s.find("ab");
int main() {
    string s;
    char c;
    cin >> s >> c;
    for(int i=0; i<s.length(); i++){
        if(s[i]==c){
            cout << i;
            break;
        }
        else if(i==s.length()-1){
            cout << "No";
        }
    }

    return 0;
}