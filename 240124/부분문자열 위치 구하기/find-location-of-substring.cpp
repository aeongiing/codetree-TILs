#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string ss;
    cin >> s >> ss;
    
    int start_index=-1;
    if(s.find(ss) != string::npos){
        start_index=s.find(ss);
    }
    cout << start_index;

    return 0;
}