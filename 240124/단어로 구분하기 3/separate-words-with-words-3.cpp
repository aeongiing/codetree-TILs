#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10];
    for(int i=0; i<10; i++){
        cin >> str[i];
    }
    for(int i=0; i<10; i++){
        cout << str[10-i-1] << endl;
    }
    return 0;
}