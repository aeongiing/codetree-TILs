#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string s1_i={}, s2_i={};
    for(int i=0; i<s1.length(); i++){
        if(s1[i]>='0' && s1[i]<='9'){
            s1_i+=s1[i];
        }
    }
    for(int i=0; i<s2.length(); i++){
        if(s2[i]>='0' && s2[i]<='9'){
            s2_i+=s2[i];
        }
    }
    cout << stoi(s1_i)+stoi(s2_i);
    return 0;
}