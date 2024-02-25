#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int max = 0;
    for(int i = 1; i < n; i++){
        int cnt = 0;
        while(a[i]==a[i-1]){
            cnt++;
            i++;
        }
        if(cnt>max)
            max=cnt+1;
    }
    cout << max;
    return 0;
}