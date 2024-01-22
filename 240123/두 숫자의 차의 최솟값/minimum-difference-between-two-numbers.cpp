#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int minus[n];
    for(int i=0; i<n; i++){
        int min=100;
        for(int j=0; j<n; j++){
            if(arr[i]>arr[j]){
                m=arr[i]-arr[j];
            }
            else{
                m=arr[j]-arr[i];
            }
            if(m<=min){
                min=m;
            }
        }
        minus[i]=min;
    }
    int min=100;
    for(int i=0; i<n; i++){
        if(minus[i]<min){
            min=minus[i];
        }
    }
    cout << min;
    return 0;
}