#include <iostream>
using namespace std;

int square(int a, int b){
    int s=a;      
    for(int i=1; i<b; i++){
        a*=s;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << square(a, b);
    return 0;
}