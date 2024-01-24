#include <iostream>
#include <string>
using namespace std;
//s.find("ab") != string::npos
int main() {
    string s;
    cin >> s;
    bool exist1=false;
    bool exist2=false;

    if(s.find("ee") != string::npos){
        exist1=true;
    }
    if(s.find("ab") != string::npos){
        exist2=true;
    }

    if(exist1==true){
        cout << "Yes ";
    }
    else{
        cout << "No ";
    }

    if(exist2==true){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}