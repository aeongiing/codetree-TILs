#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int max=1;
    int cnt=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                arr[i]=0;
                arr[j]=0;
            }
        }
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    if(max<1){
        cout << -1;
    }
    else{
        cout << max;
    }
    return 0;
}