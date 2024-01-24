#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str[n];
    int sum=0;
    int cnt=0;
    for(int i=0; i<n; i++){
        cin >> str[i];
        sum+=str[i].length();
        if(str[i][0]=='a'){
            cnt++;
        }
    }
    cout << sum << " " << cnt;
    return 0;
}