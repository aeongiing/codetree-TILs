#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    string str3=str1+str2;

    int cnt=0;

    for(int i=0; i<str3.length(); i++){
        if(str3[i]==' '){
            for(int j=i; j<str3.length(); j++){
                str3[j]=str3[j+1];
            }
            cnt++;
        }
    }
    for(int i=0; i<str3.length()-cnt; i++){
        cout << str3[i];
    }
    return 0;
}