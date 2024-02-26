#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n]={};
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int max=0;
    for(int i = 1; i < n; i++){
        int cnt = 1;
        while(arr[i]*arr[i - 1]>0 && i<n){
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