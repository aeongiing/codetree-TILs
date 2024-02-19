#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string binary=to_string(n);
    int num=0;

    for(int i = 0; i < binary.length(); i++){
        num = num * 2 + binary[i]-48;
    }
    n=num*17;

    int digits[20];
    int cnt=0;
    while (true) {
        if(n < 2) {
            digits[cnt++] = n;
            break;
        }
    
        digits[cnt++] = n % 2;
        n /= 2;
    }
    
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];
    return 0;
}