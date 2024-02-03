#include <iostream>
using namespace std;

string a, b;

bool IsSame(int n) {
    for(int i = 0; i < b.length(); i++)
        if(a[i + n] != b[i])
            return false;

    return true;
}

// b가 a의 연속부분수열인지 확인합니다.
int IsSubsequence() {
    for(int i = 0; i <= a.length() - b.length(); i++)
        if(IsSame(i))
            return i;
    
    return -1;
}

int main() {
    cin >> a;
    cin >> b;
    cout << IsSubsequence();
    return 0;
}