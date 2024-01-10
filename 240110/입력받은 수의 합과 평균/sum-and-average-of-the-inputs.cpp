#include <iostream>
using namespace std;

int main() {
    int n, a, sum=0, cnt=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        sum+=a;
        cnt++;
    }
    cout.precision(1);
    cout << sum << " " << fixed << (double)sum/cnt;
    return 0;
}