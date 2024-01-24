#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string str2;

    for(int i=0; i<str.length(); i++){
        if(i%2!=0){
            str2+=str[i];
        }
    }
    for(int i=0; i<str2.length(); i++){
        cout << str2[str2.length()-i-1];
    }

    return 0;
}