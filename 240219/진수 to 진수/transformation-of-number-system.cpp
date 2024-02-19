#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    string binary=to_string(n);
    int num=0;
    for(int i = 0; i < binary.length(); i++){
        num = num * a + binary[i]-48;
    }
    n=num;
    int digits[20];
    int cnt=0;
    while (true) {
        if(n < b) {
            digits[cnt++] = n;
            break;
        }
    
        digits[cnt++] = n % b;
        n /= b;
    }
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];
    return 0;
}