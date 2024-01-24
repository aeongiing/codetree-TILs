#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str[n];
    char c;
    int cnt=0;
    int sum=0;

    for(int i=0; i<n; i++){
        cin >> str[i];
    }
    cin >> c;
    for(int i=0; i<n; i++){
        if(str[i][0]==c){
            sum+=str[i].length();
            cnt++;
        }
    }
    cout.precision(2);
    cout << cnt << " " << fixed << (double)sum/cnt;
    return 0;
}