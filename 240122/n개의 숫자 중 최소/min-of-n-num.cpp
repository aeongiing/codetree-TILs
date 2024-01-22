#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int min=INT_MAX;
    int cnt=0;
    for(int i=0; i<n; i++){
        cin >> arr[n];
        if(arr[n]<=min){
            min=arr[n];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[n]==min){
            cnt++;
        }
    }
    cout << min << " " << cnt;
    return 0;
}