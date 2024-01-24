#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum=a+b;
    string s=to_string(sum);
    int cnt=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='1'){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}