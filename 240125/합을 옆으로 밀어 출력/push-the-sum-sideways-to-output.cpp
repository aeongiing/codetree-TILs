#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum=0;
    string s;

    while(n--){
        int a;
        cin >> a;
        sum+=a;
    }
    s=to_string(sum);
    s=s.substr(1, s.length()-1)+s.substr(0, 1);
    cout << s;
    return 0;
}