#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int sum=24*60*a + 60*b + c;

    if(sum<11*24*60 + 11*60 + 11){
        cout << -1;
    }
    else{
        cout << sum-(11*24*60 + 11*60 + 11);
    }

    return 0;
}