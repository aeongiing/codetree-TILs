#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=11; i<11+2*n; i+=2){
        for(int j=i; j<i+2*n; j+=2){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}