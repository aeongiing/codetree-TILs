#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int count_arr[10]={};
    for(int i=0; i<n; i++){
        cin >> arr[i];
        count_arr[arr[i]]++;
    }
    for(int i=1; i<10; i++){
        cout << count_arr[i] << endl;
    }
    return 0;
}