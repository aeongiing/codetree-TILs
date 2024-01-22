#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int min=INT_MAX;
    int max=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int idx;
    for(int i=0; i<n; i++){
        if(arr[i]==min){
            idx=i;
        }
    }
    for(int j=idx+1; j<n; j++){
            if(arr[j]>max){
                max=arr[j];
            }
        }
    cout << max-min;
    return 0;
}