#include <iostream>
using namespace std;

int main() {
    int n, x=0;
    cin >> n;
    while(1){
        n/=2;
        x++;
        if(n==1){
            cout << x;
            break;
        }
    }
    return 0;
}