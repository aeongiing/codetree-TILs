#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
        if(i == 0 || a[i] != a[i - 1])
            cnt++;

    cout << cnt;
    return 0;
}