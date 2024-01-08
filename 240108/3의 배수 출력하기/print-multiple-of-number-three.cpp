#include <iostream>
using namespace std;

int main() {
    int i=1;
    int n;
    cin >> n;
    while(i<=n){
        if(i%3==0){
            cout << i << " ";
        }
        i++;
    }
    return 0;
}