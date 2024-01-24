#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str[n];
    for(int i=0; i<n; i++){
        cin >> str[i];
        cout << str[i];
    }
    
    return 0;
}