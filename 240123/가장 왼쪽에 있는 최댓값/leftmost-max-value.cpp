#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int idx=n+1;
    
    while(idx!=1){
        int max=0;
        for(int i=0; i<n; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        for(int j=0; j<n; j++){
            if(arr[j]==max){
                idx=j+1;
                n=idx-1;
                cout << idx << " ";
                break;
            }
        }
    }
    return 0;
}