#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string s1_int, s2_int;
    for(int i=0; i<s1.length(); i++){
        if(!(s1[i]>='0' && s1[i]<='9')){
            break;
        }
        else{
            s1_int[i]=s1[i];
        }
    }
    for(int i=0; i<s2.length(); i++){
        if(!(s2[i]>='0' && s2[i]<='9')){
            break;
        }
        else{
            s2_int[i]=s2[i];
        }
    }
    cout << stoi(s1_int)+stoi(s2_int);
    return 0;
}