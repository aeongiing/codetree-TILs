#include <iostream>
using namespace std;

void UpAndDown(int n){
    if(n == 0)
        return;

    cout << n << " ";
    UpAndDown(n - 1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    UpAndDown(n);
    return 0;
}