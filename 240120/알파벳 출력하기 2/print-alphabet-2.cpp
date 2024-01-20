#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char cnt='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        for(int j=i; j<n; j++){
            cout << (char)cnt << " ";
            (int)cnt++;
        }
        cout << endl;
    }
    return 0;
}