#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin >> arr[i][j];
        }
    }
    int arr_sum[n];
    for(int i=0; i<n; i++){
        arr_sum[i]=arr[i][0]+arr[i][1];
    }
    sort(arr_sum, arr_sum+n);
    cout << arr_sum[n-1];


    return 0;
}