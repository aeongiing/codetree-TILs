#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n]={};
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    int max=0;
    for(int i = 1; i < n; i++){
        while(arr[i]*arr[i - 1]>0){
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