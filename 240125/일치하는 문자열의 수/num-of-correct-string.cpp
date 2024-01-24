#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string A;
    cin >> n >> A;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s==A){
            cout << i;
        }
    }
    return 0;
}