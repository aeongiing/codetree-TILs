#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10];
    char c;
    for(int i=0; i<10; i++){
        cin >> str[i];
    }
    cin >> c;
    int cnt=0;
    for(int i=0; i<10; i++){
        if(str[i][str[i].length()-1]==c){
            cout << str[i] << endl;
            cnt++;
        }
    }
    if(cnt==0){
        cout << "None";
    }
    return 0;
}