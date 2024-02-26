#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int max=0;
    for(int i=0; i<n; i++){
        int cnt=0;
        while(arr[i]>t && i<n){
            cnt++;
            i++;
        }
        if(cnt>max){
            max=cnt;
        }
    }
    cout << max;

    return 0;
}