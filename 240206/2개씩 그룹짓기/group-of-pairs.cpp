#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[2*n];
    int sum=0;
    for(int i=0; i<2*n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr, arr+2*n);
    for(int i=0; i<2*n; i++){
        if(arr[i]>=sum/(2*n)){
            cout << arr[i]+arr[i+1];
            break;
        }
    }


    return 0;
}