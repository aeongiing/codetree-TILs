#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int max=0;
    int cnt=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                arr[j]=0;
                arr[i]=0;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    if(max==0){
        cout << -1;
    }
    else{
        cout << max;
    }

    return 0;
}