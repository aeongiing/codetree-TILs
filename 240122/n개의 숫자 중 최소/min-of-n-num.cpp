#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int cnt=0;
    cin >> arr[0];
    int min=arr[0];
    for(int i=1; i<n; i++){
        cin >> arr[n];
        if(arr[n]<=min){
            min=arr[n];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]==min){
            cnt++;
        }
    }
    cout << min << " " << cnt;
    return 0;
}