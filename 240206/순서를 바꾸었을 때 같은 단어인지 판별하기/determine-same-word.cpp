#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1==s2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}