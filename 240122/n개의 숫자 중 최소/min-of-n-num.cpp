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
        cin >> arr[i];
        if(arr[i]<=min){
            min=arr[i];
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