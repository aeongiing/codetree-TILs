#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int a;
    cin >> str >> a;
    if(a>str.length()){
        for(int i=0; i<str.length(); i++){
            cout << str[str.length()-1-i];
        }
    }
    else{
        for(int i=0; i<a; i++){
            cout << str[str.length()-i-1];
        }        
    }

    return 0;
}